/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:21:38 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/20 17:25:49 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1024);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%d, %d, %d\n", ft_isalpha('A'), ft_isalpha('a'), ft_isalpha('1'));
	printf("%d, %d, %d", isalpha("A"), isalpha('a'), isalpha('1'));
}*/
