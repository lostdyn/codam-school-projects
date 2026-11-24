/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/20 21:30:32 by anonymous     #+#    #+#                 */
/*   Updated: 2026/11/24 08:18:30 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

//int	ft_str_is_lowercase(char *str);

//int	main(void)
//{
//	char	str[] = "thistookwaytoolong";

//	printf("%d\n", ft_str_is_lowercase(str));
//	ft_str_is_lowercase(str);
//	return (0);
//}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
