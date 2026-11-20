/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/19 10:07:19 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/19 12:52:47 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

// int	main(int i, int j)
// {
// 	int	div;
// 	int	mod;

// 	i = 42;
// 	j = 10;
// 	ft_div_mod(i, j, &div, &mod);
// 	printf("Devision: %d\n", div);
// 	printf("Modulo: %d\n", mod);
// 	return (0);
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
