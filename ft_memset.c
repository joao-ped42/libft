/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:08:54 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/20 19:22:05 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	char naruto[] = "Soldado soldado";
	char narutoo[] = "Soldado soldado";
	printf("%s\n", (char *)ft_memset(naruto, 69, 10);
	printf("%s", (char *)memset(narutoo, 69, 10));
}*/
