/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dd-aulni <dd-aulni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/19 13:49:01 by dd-aulni      #+#    #+#                 */
/*   Updated: 2026/11/19 14:25:34 by dd-aulni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	
	return (0);
}

char *ft_strcpy(char *dest, char *src)
{
	size_t;

	for (i = 0; < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for ( ; i < n; i++)
	dest[i] = '\0';

	return dest;
}