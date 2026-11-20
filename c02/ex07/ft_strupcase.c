/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/20 21:35:00 by anonymous     #+#    #+#                 */
/*   Updated: 2026/11/20 21:35:00 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// char *ft_strupcase(char *str);

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}