/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjonas <mjonas@students.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:44:30 by mjonas            #+#    #+#             */
/*   Updated: 2026/07/05 19:01:27 by mjonas           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "verify.h"
#include <stdlib.h>

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

int	ft_is_valid_move(int x, int y, int val, int **matrix)
{
	if (ft_is_num_in_col(x, val, matrix) || ft_is_num_in_row(y, val, matrix))
		return (FALSE);
	return (TRUE);
}

void	save_lines(int *x, int *y)
{
	(*y)++;
	(*x) = 0;
}

int	solve(int *input, int **matrix, int x, int y)
{
	int	i;

	if (ft_is_valid_board(input, matrix) || x == 4 && y == 3)
		return (TRUE);
	if (x == 4)
	{
		if (ft_verify_col(y, input, matrix) && solve(input, matrix, 0, y + 1))
			return (TRUE);
		else
			return (FALSE);
		save_lines(&x, &y);
	}
	i = 0;
	while (++i <= 4)
	{
		if (ft_is_valid_move(x, y, i, matrix))
		{
			matrix[y][x] = i;
			if (solve(input, matrix, x + 1, y))
				return (TRUE);
			matrix[y][x] = 0;
		}
	}
	return (FALSE);
}
