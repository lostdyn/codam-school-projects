/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: andanse <andanse@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/14 19:53:20 by andanse       #+#    #+#                 */
/*   Updated: 2026/11/15 20:30:25 by andanse       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, char first, char middle, char last)
{
	int	column;

	column = 1;
	while (column <= x)
	{
		if (column == 1)
			ft_putchar(first);
		else if (column == x)
			ft_putchar(last);
		else
			ft_putchar(middle);
		column++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	if (x <= 0 || y <= 0)
	{
		write(1, "Meow! Good try ;)\n", 18);
		return ;
	}
	row = 1;
	while (row <= y)
	{
		if (row == 1)
			print_line(x, '/', '*', '\\');
		else if (row == y)
			print_line(x, '\\', '*', '/');
		else
			print_line(x, '*', ' ', '*');
		row++;
	}
}
