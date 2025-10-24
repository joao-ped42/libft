/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:29:10 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/20 11:32:31 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (2048);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%d, %d, %d\n", ft_isdigit('A'), ft_isdigit('a'), ft_isdigit('1'));
	printf("%d, %d, %d", isdigit('A'), isdigit('a'), isdigit('1'));
}*/
