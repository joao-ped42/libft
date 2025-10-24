/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:47:01 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/24 16:22:47 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_total_len(char const *s1, char const *s2)
{
	int	c;

	c = 0;
	while (s1[c])
		c++;
	while (s2[c])
		c++;
	return (c);
}

static int	ft_getstr(char *dest, const char *src, int i, int j)
{
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (j);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	s3 = malloc(sizeof(char) * ft_total_len(s1, s2));
	i = 0;
	j = 0;
	if (s3)
	{
		ft_getstr(s3, s1, i, j);
		i = 0;
		ft_getstr(s3, s2, i, j);
		s3[j] = '\0';
		return (s3);
	}
	else
		return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
    char    naruto[] = "Naruto e ";
    char    sonic[] = "Sonic";
    printf("%s", ft_strjoin(naruto, sonic));
}*/
