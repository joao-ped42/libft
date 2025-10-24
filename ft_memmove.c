/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:56:46 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/23 16:57:28 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*aux;
	unsigned char	*aux2;
	unsigned char	temp[n];
	size_t			i;

	aux = (unsigned char *)dest;
	aux2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = aux2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		aux[i] = temp[i];
		i++;
	}
	return (aux);
}
/*
#include <stdio.h>
int main() {
	char a[20] = "ABCDEFGHIJ";
    char b[20] = "ABCDEFGHIJ";

    printf("Original:\n");
    printf("a: %s\n", a);
    printf("b: %s\n\n", b);

    // memcpy (NÃO SEGURA se há sobreposição)
    memcpy(a + 2, a, 5);  // move "ABCDE" para começar no índice 2
    printf("Usando memcpy (com sobreposição):\n%s\n\n", a);

    // memmove (SEGURA)
    ft_memmove(b + 2, b, 5); // move "ABCDE" para começar no índice 2
    printf("Usando memmove (com sobreposição):\n%s\n", b);

    return 0;
}*/
