/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 01:45:46 by dekravts          #+#    #+#             */
/*   Updated: 2024/08/24 22:29:13 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	find_min(int *a, int size)
{
	int	i;
	int	min_index;

	i = 1;
	min_index = 0;
	while (i < size)
	{
		if (a[i] < a[min_index])
			min_index = i;
		i++;
	}
	return (min_index);
}

int	find_max(int *a, int size)
{
	int	i;
	int	current_max;

	i = 1;
	current_max = a[0];
	while (i < size)
	{
		if (a[i] > current_max)
			current_max = a[i];
		i++;
	}
	return (current_max);
}

void	sin_sporta(t_data *array)
{
	int	max_number;
	int	max_bits;
	int	i;
	int	j;

	max_number = find_max(array->a, array->size_a);
	max_bits = 0;
	i = 0;
	j = 0;
	while ((max_number >> max_bits) != 0)
		max_bits++;
	for (i = 0; i < max_bits; i++)
	{
		for (j = 0; j < array->size_a; j++)
		{
			int	num = array->a[0];
			if (((num >> i) & 1) == 1)
				rotateA(array);
			else
				push_b(array);
		}
		while (array->size_b > 0)
			push_a(array);
	}
}


// void	sort(t_data *array)
// {
// 	int	min;
	
// 	while (array->size_a > 0)
// 	{
// 		min = find_min(array->a, array->size_a);
// 		if (min < array->size_a / 2)
// 		{
// 			while (min > 0)
// 			{
// 				rotateA(array);
// 				min--;
// 			}
// 		}
// 		else
// 		{
// 			while (min < array->size_a)
// 			{
// 				rra(array);
// 				min++;
// 			}
// 		}
// 		push_b(array);
// 	}
// 	while (array->size_b > 0)
// 	{
// 		push_a(array);
// 	}
// }

//int	main()
// {
// 	int	arr[] = {-1000, -300, 210, -1900};
// 	printf("%d\n", find_min(arr, 4));
// }