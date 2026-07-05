/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjonas <mjonas@students.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:47:23 by mjonas            #+#    #+#             */
/*   Updated: 2026/07/05 17:47:25 by mjonas           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_verify_col(int col, int *input, int **matrix)
{
	int	right;
	int	left;
	int	biggest;
	int	right_increment;
	int	left_increment;
	int	j;

	biggest = 0;
	right_increment = 0;
	left_increment = 0;
	right = input[col + 8];
	left = input[col + 12];
	j = 0;
	while (j < 4)
	{
		if (matrix[col][j] > biggest)
		{
			biggest = matrix[col][j];
			right_increment++;
		}
		j++;
	}
	j--;
	biggest = 0;
	while (j >= 0)
	{
		if (matrix[col][j] > biggest)
		{
			biggest = matrix[col][j];
			left_increment++;
		}
		j--;
	}
	return (right_increment == right) && (left_increment == left);
}

int	ft_verify_column(int col, int *input, int **matrix)
{
	int	i;
	int	biggest;
	int	top;
	int	bottom;
	int	top_increment;
	int	bottom_increment;
	int	j;
	int	contains_null;

	contains_null = 0;
	i = 0;
	biggest = 0;
	top_increment = 0;
	bottom_increment = 0;
	top = input[col];
	bottom = input[col + 4];
	j = 0;
	while (j < 4)
	{
		if (matrix[col][j] > biggest)
		{
			biggest = matrix[col][j];
			top_increment++;
		}
		if (matrix[col][j] == 0)
		{
			contains_null = 1;
		}
		j++;
	}
	j--;
	biggest = 0;
	while (j >= 0)
	{
		if (matrix[col][j] > biggest)
		{
			biggest = matrix[col][j];
			bottom_increment++;
		}
		j--;
	}
	return ((top_increment == top) && (bottom_increment == bottom)
		&& !contains_null);
}

int	ft_is_valid_board(int *input, int **matrix)
{
	int	i;
	int	j;

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
