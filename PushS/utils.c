/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:31:12 by dekravts          #+#    #+#             */
/*   Updated: 2024/08/23 05:35:55 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int		ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	
	return (result * sign);
}

int	check_sorted(int *a, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (a[i] > a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_doubles(int *a, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (a[i] == a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// int	main()
// {
// 	int	arr[] = {0, -1, 3, 4, 5, 2};
// 	printf("%d\n", check_doubles(arr, 6));
// 	// printf("%d\n", ft_atoi("42"));
// }