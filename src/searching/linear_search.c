/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:44:18 by ehosta            #+#    #+#             */
/*   Updated: 2024/12/26 15:44:18 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "searching.h"

int	linear_search(int *list, int value, int length)
{
	int	i;

	i = -1;
	while (++i < length)
	{
		if (value == list[i])
			return (i);
	}
	return (-1);
}
