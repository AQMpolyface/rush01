

void	ft_put_y_right(int *input, int **matrix)
{
	int	y;
	int	right;
	int	j;
	int	i;

	y = 0;
	while (y < 4)
	{
		right = input[y + 12];
		j = 3;
		i = 0;
		while (i < 4 && right == 4)
		{
			matrix[y][i] = j + 1;
			i++;
			j--;
		}
		y++;
	}
}

void	ft_put_y_left(int *input, int **matrix)
{
	int	y;
	int	left;
	int	j;
	int	i;

	y = 0;
	while (y < 4)
	{
		left = input[y + 8];
		j = 0;
		i = 0;
		while (i < 4 && left == 4)
		{
			matrix[y][i] = j + 1;
			j++;
			i++;
		}
		y++;
	}
}

void	ft_put_x_top(int *input, int **matrix)
{
	int	y;
	int	top;
	int	j;
	int	i;

	y = 0;
	while (y < 4)
	{
		top = input[y];
		j = 0;
		while (j < 4 && top == 4)
		{
			matrix[j][y] = j + 1;
			j++;
		}
		y++;
	}
}

void	ft_put_x_bottom(int *input, int **matrix)
{
	int y;
	int bottom;
	int j;
	int i;

	y = 0;
	while (y < 4)
	{
		bottom = input[y + 4];
		j = 3;
		i = 0;
		while (i < 4 && bottom == 4)
		{
			matrix[j][y] = j + 1;
			j--;
			i++;
		}
		y++;
	}
} // void	max_put_x_top(int *input, int **matrix)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	while (i <= 3)
// 	{
// 		j = 0;
// 		if (input[i] == 4)
// 		{
// 			while (j < 4)
// 			{
// 				matrix[i][j] = j + 1;
// 				j++;
// 			}
// 		}
// 		i++;
// 	}
// }

// void	max_put_x_bottom(int *input, int **matrix)
// {
// 	int	i;
// 	int	j;

// 	i = 4;
// 	while (i <= 7)
// 	{
// 		j = 3;
// 		if (input[i] == 4)
// 		{
// 			while (j >= 0)
// 			{
// 				matrix[i - 4][j] = j + 1;
// 				j--;
// 			}
// 		}
// 		i++;
// 	}
// }

// void	max_put_y_left(int *input, int **matrix)
// {
// 	int	i;
// 	int	j;
// 	int	y;

// 	y = 0;
// 	i = 8;
// 	while (i <= 11)
// 	{
// 		j = 0;
// 		if (input[i] == 4)
// 		{
// 			while (j < 4)
// 			{
// 				matrix[j][i - 8] = j + 1;
// 				j++;
// 			}
// 		}
// 		i++;
// 	}
// }

// void	max_put_y_right(int *input, int **matrix)
// {
// 	int	i;
// 	int	j;

// 	i = 12;
// 	while (i <= 15)
// 	{
// 		j = 3;
// 		if (input[i] == 4)
// 		{
// 			while (j >= 0)
// 			{
// 				matrix[j][i - 12] = j + 1;
// 				j--;
// 			}
// 		}
// 		i++;
// 	}
// }
// // int	ft_verify_row(int row, int *input, int **matrix)
// // {
// // 	int	right;
// // 	int	left;
// // 	int	biggest;
// // 	int	right_increment;
// // 	int	left_increment;
// // 	int	j;

// // 	while (i < 4)
// // 	{
// // 		while (j < 4)
// // 		{
// // 			int total = i * 4 + j
// // 		}
// // 	}
// // 	biggest = 0;
// // 	right_increment = 0;
// // 	left_increment = 0;
// // 	left = input[row + 4];
// // 	right = input[row + 8];
// // 	j = 0;
// // 	while (j < 4)
// // 	{
// // 		if (matrix[j][row] > biggest)
// // 		{
// // 			biggest = matrix[j][row];
// // 			right_increment++;
// // 		}
// // 		j++;
// // 	}
// // 	j--;
// // 	biggest = 0;
// // 	while (j >= 0)
// // 	{
// // 		if (matrix[j][row] > biggest)
// // 		{
// // 			biggest = matrix[j][row];
// // 			left_increment++;
// // 		}
// // 		j--;
// // 	}
// // 	return (right_increment == right) && (left_increment == left);
// // }
