/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/21 13:32:54 by anonymous     #+#    #+#                 */
/*   Updated: 2026/11/23 12:03:26 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

// char *ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end)
		dest_end++;
	while (*src)
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	*dest_end = '\0';
	return (dest);
}