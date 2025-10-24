/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:13:15 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/23 18:22:35 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		if (j < size)
			dst[i] = src[j];
		j++;
		i++;
	}
	return (i);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char dest[10] = "Oi";
    char src[] = " mundo!";

    size_t n = strlcat(dest, src, sizeof(dest));

    printf("dest = '%s'\n", dest);
    printf("Retorno = %zu\n", n);
    printf("strlen(dest) = %zu\n", strlen(dest));

    if (n >= sizeof(dest)) {
        printf("Aviso: string foi truncada!\n");
    }
    return 0;
}*/
