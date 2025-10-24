/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:27:50 by joao-ped          #+#    #+#             */
/*   Updated: 2025/10/23 21:42:53 by joao-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	i;
	int	k;
	int	result;

	sign = 1;
	i = 0;
	k = 0;
	result = 0;
	while (!((nptr[i] >= '0') && (nptr[i] <= '9')))
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
		k++;
		if (k > 1)
			return (0);
	}
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi("--8496"));
}*/
