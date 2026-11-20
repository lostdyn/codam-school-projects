/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*    ft_swap.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/17 11:50:28 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/19 12:52:17 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b);

// int	main(void)
// {
// 	int	i;
// 	int	j;

// 	i = 10;
// 	j = 20;
// 	printf("changed values\n");
// 	printf("i = %d\n", i);
// 	printf("j = %d\n", j);
// 	return (0);
// }

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
