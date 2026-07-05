/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjonas <mjonas@students.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:47:23 by mjonas            #+#    #+#             */
/*   Updated: 2026/07/05 19:03:01 by mjonas           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "count.h"
#include "utils.h"

int	ft_verify_col(int col, int *input, int **matrix)
{
	int	l_increment;
	int	r_increment;

	l_increment = count_left_to_right(col, matrix);
	r_increment = count_right_to_left(col, matrix);
	return ((l_increment == input[col + 8]) && (r_increment == input[col
				+ 12]));
}

int	ft_verify_column(int col, int *input, int **matrix)
{
	int	t_increment;
	int	b_increment;

	t_increment = count_top_to_bottom(col, matrix);
	b_increment = count_bottom_to_top(col, matrix);
	return ((t_increment == input[col]) && (b_increment == input[col + 4]));
}

int	ft_is_valid_board(int *input, int **matrix)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!ft_verify_column(i, input, matrix))
		{
			return (FALSE);
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (!ft_verify_col(i, input, matrix))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
