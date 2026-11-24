/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/20 21:31:47 by anonymous     #+#    #+#                 */
/*   Updated: 2026/11/24 08:21:49 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

//int ft_str_is_uppercase(char *str);

//int main(void)
//{
//	char str[] = "MYCODESOGOODIKNOW";
//	printf("%d\n", ft_str_is_uppercase(str));
//	ft_str_is_uppercase(str);
//	return (0);
//}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
