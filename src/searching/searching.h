/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searching.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 20:52:14 by ehosta            #+#    #+#             */
/*   Updated: 2025/01/13 21:30:44 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGOS_SEARCHING_H
# define ALGOS_SEARCHING_H

/**
 * Search for an element in a list of integers. Returns the first occurence
 * of an element whose value matches the chosen value. Returns -1 if nothing
 * has been found. Uses the binary searching algorithm.
 * @param list The list to search on.
 * @param value The value to look for.
 * @param length The length of the list, to prevent overflow.
 * @returns The position of the first occurence of the searched term.
 */
int	binary_search(int *list, int value, int length);

/**
 * Search for an element in a list of integers. Returns the first occurence
 * of an element whose value matches the chosen value. Returns -1 if nothing
 * has been found.
 * @param list The list to search on.
 * @param value The value to look for.
 * @param length The length of the list, to prevent overflows.
 * @returns The position of the first occurence of the searched term.
 */
int	linear_search(int *list, int value, int length);

#endif