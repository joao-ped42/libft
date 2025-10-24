/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:51:56 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/24 14:52:02 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((i < n - 1) && (s1[i] != '\0')
		&& (s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	naruto[] = "Hello";
	char	naruto1[] = "Hellz";
	
	printf("%d\n", ft_strncmp(naruto, naruto1, 0));
	
	printf("%d", strncmp(naruto, naruto1, 0));
	
	return (0);
}*/
