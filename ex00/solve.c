/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjonas <mjonas@students.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:44:30 by mjonas            #+#    #+#             */
/*   Updated: 2026/07/05 17:44:31 by mjonas           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdlib.h>

int	ft_is_board_filled(int **matrix)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (matrix[i][j] == 0)
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
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

int	ft_is_num_in_row(int y, int val, int **matrix)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (matrix[y][i] == val)
			return (TRUE);
		i++;
	}
	return (FALSE);
}

int	ft_is_num_in_col(int x, int val, int **matrix)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (matrix[i][x] == val)
			return (TRUE);
		i++;
	}
	return (FALSE);
}

void	ft_find_empty_square(int *x, int *y, int **matrix)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (matrix[i][j] == 0)
			{
				*x = j;
				*y = i;
				return ;
			}
			j++;
		}
		i++;
	}
	return ;
}

int	ft_is_valid_move(int x, int y, int val, int **matrix, int *input)
{
	if (ft_is_num_in_col(x, val, matrix) || ft_is_num_in_row(y, val, matrix))
	{
		return (FALSE);
	}
	return (TRUE);
}

int	solve(int *input, int **matrix, int x, int y)
{
	int	i;
	int	j;

	if (ft_is_valid_board(input, matrix))
		return (TRUE);
	if (x == 4 && y == 3)
	{
		return (TRUE);
	}
	if (x == 4)
	{
		if (ft_verify_col(y, input, matrix))
		{
			if (solve(input, matrix, 0, y + 1))
				return (TRUE);
		}
		else
			return (FALSE);
		y++;
		x = 0;
	}
	i = 1;
	while (i <= 4)
	{
		if (ft_is_valid_move(x, y, i, matrix, input))
		{
			matrix[y][x] = i;
			if (solve(input, matrix, x + 1, y))
				return (TRUE);
			matrix[y][x] = 0;
		}
		i++;
	}
	return (FALSE);
}
