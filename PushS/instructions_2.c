/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:21:43 by dekravts          #+#    #+#             */
/*   Updated: 2024/08/26 01:24:32 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rotateA(t_data *array)
{
	if (array->size_a <= 1)
        return ;
    int	temp;
	int	i;
	
	temp = array->a[0];
	i = 0;
	while (i < array->size_a - 1)
	{
		array->a[i] = array->a[i + 1];
		i++;
	}
	array->a[i] = temp;
	printf("ra\n");
}

void	rotateB(t_data *array)
{
	int	temp;
	int	i;
	
	temp = array->b[0];
	i = 0;
	while (i < array->size_b - 1)
	{
		array->b[i] = array->b[i + 1];
		i++;
	}
	array->b[i] = temp;
}

void	rotateR(t_data *array)
{
	rotateA(array);
	rotateB(array);
}