/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ulimate_div_mod.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/19 11:39:14 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/19 12:53:09 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

// int	main(int i, int j)
// {
// 	int	div;
// 	int	mod;

// 	i = 42;
// 	j = 10;
// 	ft_ultimate_div_mod(&i, &j);
// 	printf("Devision: %d\n", i);
// 	printf("Modulo: %d\n", j);
// 	return (0);
// }

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
