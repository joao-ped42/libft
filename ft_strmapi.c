/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:04:14 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/23 16:30:47 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*res;

	i = 0;
	while (s[i])
		i++;
	res = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
char	naruto(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c - 32);
	return (c);
}

#include <stdio.h>
int main(void)
{
	char *sonic = "abcdef";
	char *resultado;

	resultado = ft_strmapi(sonic, naruto);
	printf("Original:  %s\n", str);
	printf("Resultado: %s\n", resultado);
	return 0;
}*/
