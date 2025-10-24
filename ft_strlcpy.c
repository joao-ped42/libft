/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:57:30 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/23 18:03:53 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	while (i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}
/*#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char naruto[] = "Naruto";
	char sonic[2];
	char naruto2[] = "Naruto";
	char sonic2[2];

	size_t l = strlcpy(sonic2, naruto2, 4);
	size_t n = ft_strlcpy(sonic, naruto, 4);
	printf("A minha: %s\n%zu\n", sonic, n);
	printf("Original: %s\n%zu", sonic2, l);
}*/
