/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:17:55 by dekravts          #+#    #+#             */
/*   Updated: 2024/08/23 05:02:01 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void    rra(t_data *array)
{
    int temp;
    int i = array->size_a - 1;

    temp = array->a[i];
    while (i > 0)
    {
        array->a[i] = array->a[i - 1];
        i--;
    }
    array->a[i] = temp;
    printf("rra\n");
}

void    rrb(t_data *array)
{
    int temp;
    int i;

    i = array->size_b;
    temp = array->b[i - 1];
    while (i)
    {
        array->b[i] = array->b[i - 1];
        i--;
    }
    array->b[i] = temp;
}

void    rrr(t_data *array)
{
    rra(array);
    rrb(array);
}