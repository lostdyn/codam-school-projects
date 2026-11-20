/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/20 21:22:13 by anonymous     #+#    #+#                 */
/*   Updated: 2026/11/20 21:22:13 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
        {
            return 0;
        }
        i++;
    }
}
