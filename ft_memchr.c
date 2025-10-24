/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:57:46 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/24 15:16:34 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while ((str) && (i < n))
	{
		if (str[0] == c)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char naruto[] = "Naruto e sasuke";
	printf("Original: %s\n", memchr(naruto, 'e', 8));
	printf("Fajuta: %s", ft_memchr(naruto, 'e', 8));
}*/
