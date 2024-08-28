/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 20:30:17 by dekravts          #+#    #+#             */
/*   Updated: 2024/08/28 21:01:10 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>

typedef struct s_data
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}			t_data;

//instructions :
void	sa(t_data *array);
void	sb(t_data *array);
void	ss(t_data *array);
void	push_a(t_data *array);
void	push_b(t_data *array);
void	rotateA(t_data *array);
void	rotateB(t_data *array);
void	rotateR(t_data *array);
void	rra(t_data *array);
void	rrb(t_data *array);
void	rrr(t_data *array);
//utility functions :
int		ft_atoi(char *str);
int     check_sorted(int *a, int size);


//sorting algorithm :
void    sin_sporta(t_data *array);
int     find_min(int *a, int size);
int     find_max(int *a, int size);
void    srt(int *a, int size);
int     middle(int *a, int size);
int     cpy_srt(t_data *array);
void    pushing(t_data *array, int size);
void    push_back(t_data *array);
void    rotate_piv(t_data *array, int pos);
#endif