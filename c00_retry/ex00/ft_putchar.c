/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/11 15:32:55 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/16 15:43:36 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// int	main(void)
// {
// 	ft_putchar('c');
// 	return (0);
// }

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
