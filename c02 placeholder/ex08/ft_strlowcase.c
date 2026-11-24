/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/20 21:36:08 by anonymous     #+#    #+#                 */
/*   Updated: 2026/11/24 08:28:33 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

//char *ft_strlowcase(char *str);

//int main(void)
//{
//	char str[] = "REALLY DON'T FAIL ME! >:C)";
//	printf("%s\n", ft_strlowcase(str));
//	ft_strlowcase(str);
//	return (0);
//}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
