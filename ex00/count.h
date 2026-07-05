/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjonas <mjonas@students.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 18:47:22 by mjonas            #+#    #+#             */
/*   Updated: 2026/07/05 18:47:24 by mjonas           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

int	count_left_to_right(int col, int **matrix);

int	count_right_to_left(int col, int **matrix);

int	count_top_to_bottom(int col, int **matrix);

int	count_bottom_to_top(int col, int **matrix);
