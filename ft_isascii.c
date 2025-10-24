/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:18:33 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/20 17:28:28 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%d, %d\n", ft_isascii(0), ft_isascii('a'));
	printf("%d, %d\n", isascii(0), isascii('a'));
}*/
