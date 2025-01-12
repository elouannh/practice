/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:45:47 by ehosta            #+#    #+#             */
/*   Updated: 2024/12/26 15:45:47 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGOS_H
# define ALGOS_H

typedef unsigned int	t_uint;

/**
 * Search for an element in a list of integers. Returns the first occurence
 * of an element whose value matches the chosen value. Returns -1 if nothing
 * has been found. Uses the binary searching algorithm.
 * @param list The list to search on.
 * @param value The value to look for.
 * @param length The length of the list, to prevent overflow.
 * @returns The position of the first occurence of the searched term.
 */
int		binary_search(int *list, int value, int length);

void	insertion_sort(int *list, int length);

/**
 * Search for an element in a list of integers. Returns the first occurence
 * of an element whose value matches the chosen value. Returns -1 if nothing
 * has been found.
 * @param list The list to search on.
 * @param value The value to look for.
 * @param length The length of the list, to prevent overflows.
 * @returns The position of the first occurence of the searched term.
 */
int		linear_search(int *list, int value, int length);

#endif