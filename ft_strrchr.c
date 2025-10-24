/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:18:47 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/23 21:24:09 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	i = 0;
	while ((*s) && (j != 0))
	{
		if (*s == c)
			j--;
		s++;
	}
	return ((char *)s);
}
/*
#include <stdio.h>
int main(void)
{
    char naruto[] = "Naruto ANDDDDDDDDDDD sasuke";
    printf("%s\n", ft_strrchr(naruto, 's'));
}*/
