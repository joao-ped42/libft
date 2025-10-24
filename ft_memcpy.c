/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:15:05 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/23 15:27:59 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*aux;
	unsigned char	*aux2;
	size_t			i;

	aux = (unsigned char *)dest;
	aux2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		aux[i] = aux2[i];
		i++;
	}
	return (aux);
}
/*
#include <stdio.h>
int	main(void)
{
	char naruto[30] = "Sase";
	char sonic[30] = "Soldado soldado soldado";
	memcpy(naruto, sonic, 2);
	printf("%s", naruto);
}*/
