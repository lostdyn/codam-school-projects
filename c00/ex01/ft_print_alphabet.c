/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/11 19:02:53 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/16 21:17:14 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }

void	ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}
