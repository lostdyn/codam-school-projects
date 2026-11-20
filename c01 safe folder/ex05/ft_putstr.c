/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/19 12:16:09 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/19 12:53:50 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

// int	main(void)
// {
// 	ft_putstr("Hello World c; \n");
// 	return (0);
// }

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
