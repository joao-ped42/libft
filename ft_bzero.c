/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:24:53 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/21 13:48:25 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int i = 0;
	int naruto[] = {"Soldado soldado"};
	int narutoo[] = {"Soldado soldado"};
	ft_bzero(narutoo, 3);
	bzero(narutoo, 3);
	while (i < 5)
	{
		write(1, &naruto[i], 1);
		i++;
	}
	while (narutoo[i] != '\0')
        {
                printf("%i, ", narutoo[i]);
                i++;
        }
}*/
