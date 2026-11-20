/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/13 23:42:23 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/19 12:14:04 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

// int	main(void)
// {
// 	int		number;
// 	char	result[2];

// 	number = 10;
// 	ft_ft(&number);
// 	result[0] = (number / 10) + '0'; // 4 + '0' = '4'
// 	result[1] = (number % 10) + '0'; // 2 + '0' = '2'
// 	write(1, result, 2);
// 	write(1, "\n", 1);
// 	return (0);
// }

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
