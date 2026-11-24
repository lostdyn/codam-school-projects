/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/20 21:29:01 by anonymous     #+#    #+#                 */
/*   Updated: 2026/11/24 08:12:29 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

//int ft_str_is_numeric(char *str);

//int main(void)
//{
//	char str[] = "1234567890";
//	printf("%d\n", ft_str_is_numeric(str));
//	ft_str_is_numeric(str);
//    return (0);
//}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
