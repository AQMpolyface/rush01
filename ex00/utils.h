/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjonas <mjonas@students.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:45:20 by mjonas            #+#    #+#             */
/*   Updated: 2026/07/05 17:45:32 by mjonas           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_print_matrix(int **matrix);

int		ft_is_whitespace(char c);

int		**ft_alloc_matrix(void);
