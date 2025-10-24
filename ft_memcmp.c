/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:25:37 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/24 15:34:03 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((str1[i]) && (str2[i]) && (str1[i] == str2[i]) && (i < (n - 1)))
		i++;
	return (str1[i] - str2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char naruto[] = "Naruto";
	char sonic[] = "Naruta";
	printf("Original: %d\n", memcmp(naruto, sonic, 10));
	printf("Fajuta: %d", ft_memcmp(naruto, sonic, 10));
}*/
