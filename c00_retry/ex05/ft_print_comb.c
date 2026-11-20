/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/16 08:59:26 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/17 10:53:18 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//prototype
void	ft_print_comb(void);
void	print_char(int i, int j, int k);

// main function
// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }

//nested while loop
void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	j = '0';
	k = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				print_char(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

//print character order, also if ijk != 789 put a comma after each combination
void	print_char(int i, int j, int k)
{
	char	comma;
	char	space;

	space = ' ';
	comma = ',';
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
	if (!(i == '7' && j == '8' && k == '9'))
	{
		write (1, &comma, 1);
		write (1, &space, 1);
	}
}
