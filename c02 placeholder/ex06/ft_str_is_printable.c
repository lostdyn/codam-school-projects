/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/20 21:32:35 by anonymous     #+#    #+#                 */
/*   Updated: 2026/11/24 08:24:12 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

//int ft_str_is_printable(char *str);

//int main(void)
//{
//    char str[] = "i swear this works";
//	printf("%d\n", ft_str_is_printable(str));
//    ft_str_is_printable(str);
//    return (0);
//}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
