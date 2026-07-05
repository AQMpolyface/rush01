#include <stdlib.h>

int	ft_verify_row(int row, int *input, int **matrix)
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
	left = input[row + 4];
	right = input[row + 8];
	j = 0;
	while (j < 4)
	{
		if (matrix[j][row] > biggest)
		{
			biggest = matrix[j][row];
			right_increment++;
		}
		j++;
	}
	j--;
	biggest = 0;
	while (j >= 0)
	{
		if (matrix[j][row] > biggest)
		{
			biggest = matrix[j][row];
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
	return (top_increment == top) && (bottom_increment == bottom);
}

int	ft_is_valid_board(int *input, int **matrix)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!ft_verify_column(i, input, matrix))
		{
			return (0);
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (!ft_verify_row(i, input, matrix))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_is_int_in_col(int col, int **matrix)
{
	int	i;

	i = 0;
}

int	pose(int **matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
		}
	}
}

int	contains_x(int x, int num, int **matrix)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (num == matrix[i][x])
			return (1);
		i++;
	}
	return (0);
}

int	contains_y(int y, int num, int **matrix)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (num == matrix[y][i])
			return (1);
		i++;
	}
	return (0);
}

int	count_digits(int n)
{
	if (n / 10 == 0)
		return (1);
	return (1 + count_digits(n / 10));
}

// int	ft_find_next(int num)
// {
// 	int	i;
// 	int	digits_count;
// 	int	j;
// 	int	actual_num;
// 	int	i_num;

// 	digits_count = count_digits(num);
// 	i = 0;
// 	while (i < 4321)
// 	{
// 		i_num = num % 10;
// 		j = 0;
// 		while (j < 4321)
// 		{
// 			int j_num == num;
// 			if (j != i && i_num !=)
// 				num /= 10;
// 		}
// 	}
// }
//
int	solve(int *input, int **matrix, int x, int y)
{
	if (ft_verify_row(x, input, matrix))
		return (1);
	if (y >= 4)
		return (0);
	if (x == 1 && y == 1)
		printf("%d\n", contains_y(y, matrix[y][x] + 1, matrix));
	if (!contains_x(x, matrix[y][x] + 1, matrix) && !contains_y(y, matrix[y][x]
			+ 1, matrix) && !ft_verify_row(x, input, matrix))
	{
		if (matrix[y][x] < 4)
			(matrix[y][x])++;
		else
			(matrix[y][x]) = 1;
	}
	if (x >= 4)
	{
		x = 1;
		y++;
	}
	if (x >= 4 && y >= 4)
	{
		return (0);
	}
	return (solve(input, matrix, x + 1, y));
	// i = 0;
	// digits_num = count_digits(num);
	// while (i < digits_num)
	// {
	// 	matrix[x][i] = num % 10;
	// 	num /= 10;
	// 	i++;
	// }
	// return (solve());
	// if (ft_is_valid_board(input, matrix))
	// 	return (1);
	// return (solve(input, matrix, correct));
}
