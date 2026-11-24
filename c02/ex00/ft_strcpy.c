/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/19 13:49:01 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/23 19:50:34 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

//char *ft_strcpy(char *dest, char *src);

//int main(void)
//{
//	char dest[50];
//	char src[] = "WHY WAS THIS SO HARD TO GOOGLE!??";
//	printf("%s\n", ft_strcpy(dest, src));
//	ft_strcpy(dest, src);
//	printf("Copied string: %s\n", dest);
//	return (0);
//}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
