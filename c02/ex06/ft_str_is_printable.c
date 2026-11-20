/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/20 21:32:35 by anonymous     #+#    #+#                 */
/*   Updated: 2026/11/20 21:32:35 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 32 && str[i] <= 126))
        {
            return 0;
        }
        i++;
    }
    return 1;
}