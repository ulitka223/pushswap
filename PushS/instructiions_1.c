/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructiions_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:49:39 by dekravts          #+#    #+#             */
/*   Updated: 2024/08/23 04:44:30 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_data	*array)
{
	int	temp;

	temp = array->a[0];
	array->a[0] = array->a[1];
	array->a[1] = temp;
	printf("sa\n");
}

void	sb(t_data *array)
{
	int	temp;
	
	temp = array->b[0];
	array->b[0] = array->b[1];
	array->b[1] = temp;
}

void	ss(t_data *array)
{
	sa(array);
	sb(array);
}

void	push_a(t_data *array)
{
	int	i;
	int	temp;

	i = 0;
	if (array->size_b <= 0)
		return ;
	temp = array->b[0];
	while (i < array->size_b - 1)
	{
		array->b[i] = array->b[i + 1];
		i++;
	}
	array->size_b--;
	i = array->size_a;
	while (i)
	{
		array->a[i] = array->a[i - 1];
		i--;
	}
	array->a[0] = temp;
	array->size_a++;
	printf("pa\n");
    // printf("////size of a: %d\n~~~~", (int)array->size_a);
}

void	push_b(t_data *array)
{
	int	i;
	int	temp;

	if (array->size_a <= 0)
		return ;
	i = 0;
	temp = array->a[0];
	while (i < array->size_a - 1)
	{
		array->a[i] = array->a[i + 1];
		i++;	
	}
	array->size_a--;
	i = array->size_b;
	while (i > 0)
	{
		array->b[i] = array->b[i - 1];
		i--;
	}
	array->b[0] = temp;
	array->size_b++;
	printf("pb\n");
    // printf("////size of b: %d\n~~~~", (int)array->size_b);
}


