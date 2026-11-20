/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/19 13:49:01 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/19 14:25:34 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// char *ft_strncpy(char *dest, char *src, unsigned int n);

// int main(void)
// {
//     char dest[20];
//     char src[] = "stoopid strncpy function";
//     unsigned int n = 5;

//     ft_strncpy(dest, src, n);
//     dest[n] = '\0';

//     printf("Copied string: %s\n", dest);
//     return 0;
// }

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}
