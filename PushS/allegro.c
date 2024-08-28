/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allegro.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 03:29:37 by dekravts          #+#    #+#             */
/*   Updated: 2024/08/28 21:45:29 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void srt(int *a, int size)
{
	int	i;
	int	j;
	int	temp;

    i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	middle(int *a, int size)
{
	int	mid;
	
	mid = a[size / 2 + size % 2];
	free(a);
	return (mid);
}

int		cpy_srt(t_data *array)
{
	int	*copy;
	
	copy = (int *)malloc(sizeof(int) * array->size_a);
	memcpy(copy, array->a, sizeof(int) * array->size_a);
	srt(copy, array->size_a);
	return (middle(copy, array->size_a));
}

void	rotate_piv(t_data *array, int pos)
{
	while (pos > 0)
	{
		rra(array);
		pos--;
	}
}

void	pushing(t_data *array, int size)
{
	if (array->size_a <= 1)
		return ;
	int	pivot;
	int	i;
	size = array->size_a;

	pivot = cpy_srt(array);
	i = 0;
	while (i < size)
	{
		if (array->a[0] < pivot)
		{
			push_b(array);
		}
		else
		{
			rotateA(array);
		}
		i++;
	}
	pushing(array, size / 2 + size % 2);
	push_back(array);
}

void	push_back(t_data *array)
{
	int	i;
	int	size;

	i = 0;
	size = array->size_b;
	while (i < size)
	{
		push_a(array);
		i++;
	}
}