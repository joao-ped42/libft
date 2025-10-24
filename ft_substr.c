/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:47:09 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/23 14:47:21 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*sub;
	size_t				i;
	unsigned int		j;

	i = 0;
	j = 0;
	sub = malloc((sizeof(char)) * len + 1);
	while (i < len)
	{
		sub[j] = s[start];
		start++;
		j++;
		i++;
	}
	sub[len] = '\0';
	return (sub);
}
/*
#include <stdio.h>
int	main(void)
{
	char naruto[] = "Soldado soldado soldado";
	printf("%s", ft_substr(naruto, 3, 10));
}*/
