/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/19 13:49:01 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/24 08:40:28 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

// char *ft_strncpy(char *dest, char *src, unsigned int n);

// int main(void)
//{
//    char dest[25];
//    char src[] = "stoopid strncpy function";
//    unsigned int n = 25;

//	ft_strncpy(dest, src, n);
//  dest[n] = '\0';
//	printf("%s\n", ft_strncpy(dest, src, n));
//	printf("Copied string: %s\n", dest);
//	return (0);
//}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
