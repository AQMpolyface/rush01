#include "parse.h"
#include "solve.h"
#include "utils.h"
#include <stdlib.h>

int	main(int argc, char **argv)

{
	if (argc <= 1)
	{
		ft_putstr("usage: ./rush01 col1top col2top col3top col4top col1bottom col2bottom col3bottom col4bottom row1left row2left row3left row4left row1right row2right row3right row4right");
		return (0);
	}
	int *input = ft_parse_input(argv[1]);
	if (!input)
		return (1);

	ft_print_input(input);
	ft_putchar('\n');
	int **matrix = ft_alloc_matrix();
	if (!matrix)
		return (1);
	ft_print_matrix(matrix);
	int i = 0;
	while (i < 4)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	free(input);
	return (0);
}
