/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjonas <mjonas@students.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:44:15 by mjonas            #+#    #+#             */
/*   Updated: 2026/07/05 17:49:41 by mjonas           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "solve.h"
#include "utils.h"
#include <stdlib.h>

int	main(int argc, char **argv)

{
	int	*input;
	int	**matrix;
	int	i;

	if (argc <= 1)
	{
		ft_putstr("usage: ./rush01 col1top col2top col3top col4top col1bottom"
			" col2bottom col3bottom col4bottom row1left row2left row3left"
			"row4left row1right row2right row3right row4right");
		return (0);
	}
	input = ft_parse_input(argv[1]);
	if (!input)
		return (1);
	matrix = ft_alloc_matrix();
	if (!matrix)
		return (1);
	solve(input, matrix, 0, 0);
	ft_print_matrix(matrix);
	ft_putchar('\n');
	i = -1;
	while (++i < 4)
		free(matrix[i]);
	free(matrix);
	free(input);
	return (0);
}
