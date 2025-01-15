/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:10:41 by ehosta            #+#    #+#             */
/*   Updated: 2024/12/26 19:10:41 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "searching.h"

int	binary_search(int *list, int value, int length)
{
	int	loop;
	int	i;
	int	j;
	int	m;

	loop = -1;
	i = 0;
	j = length - 1;
	m = (j - i) / 2;
	while (++loop < 100 && i < j && list[m] != value)
	{
		if (list[m] < value)
		{
			i = m;
			m = i + (j - i) / 2;
		}
		else
		{
			j = m;
			m = (j - i) / 2;
		}
	}
	if (list[m] == value)
		return (m);
	return (-1);
}
