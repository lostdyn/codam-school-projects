/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/12 09:20:18 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/16 15:44:35 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }

void	ft_print_numbers(void)
{
	char	mynum;

	mynum = '0';
	while (mynum <= '9')
	{
		write(1, &mynum, 1);
		mynum++;
	}
}
