#include "parse.h"
#include "put.h"
#include "solve.h"
#include "utils.h"
#include <stdlib.h>

int	main(int argc, char **argv)

{
	// if (argc <= 1)
	// {
	// 	ft_putstr("usage: ./rush01 col1top col2top col3top col4top col1bottom col2bottom col3bottom col4bottom row1left row2left row3left row4left row1right row2right row3right row4right");
	// 	return (0);
	// }
	/*int *input = ft_parse_input(argv[1]);
	if (!input)
		return (1);

	ft_print_input(input);
	ft_putchar('\n');
	if (!matrix)
		return (1);
*/
	// int *input = ft_parse_input("3 1 2 2 2 3 2 1 2 2 1 4 2 2 4 1");
	int *input = ft_parse_input("4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2");
	int **matrix = ft_alloc_matrix();

	// int matrix_cpy[4][4] = {
	// 	{1, 2, 3, 4},
	// 	{2, 3, 4, 1},
	// 	{3, 4, 1, 2},
	// 	{4, 1, 0, 0},
	// };

	// for (int i = 0; i < 4; i++)
	// 	for (int j = 0; j < 4; j++)
	// 		matrix[i][j] = matrix_cpy[i][j];
	// ft_print_matrix(matrix);
	printf("%d\n", ft_is_valid_board(input, matrix));
	printf("%d\n", solve(input, matrix));
	// ft_put_y_right(input, matrix);
	// ft_put_y_left(input, matrix);
	// ft_put_x_bottom(input, matrix);
	// ft_put_x_top(input, matrix);
	ft_print_matrix(matrix);
	ft_putchar('\n');
	/*
		int i = 0;
		while (i < 4)
		{
			free(matrix[i]);
			i++;
		}
		free(matrix);
		free(input);
	*/
	return (0);
}
