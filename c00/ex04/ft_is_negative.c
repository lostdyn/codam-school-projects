/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/12 10:58:07 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/13 19:06:15 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

// int	main(void)
// {
// 	ft_is_negative(1337);
// 	return (0);
// }

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
