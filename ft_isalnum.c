/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:02:16 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/20 17:12:06 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (8);
	else if ((c >= 'A') && (c <= 'Z'))
		return (8);
	else if ((c >= '0') && (c <= '9'))
		return (8);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%d, %d\n", ft_isalnum('a'), ft_isalnum('1'));
	printf("%d, %d\n", isalnum('a'), isalnum('1'));
}*/
