/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binop_bit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:10 by ehosta            #+#    #+#             */
/*   Updated: 2025/01/13 21:37:27 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "binop.h"

t_uint	getbit_uint(t_uint x, t_uint pos)
{
	return (and_uint(rshift_uint(x, pos), 1));
}

t_uint	setbit_uint(t_uint x, t_uint pos, t_uint val)
{
	if (val == 1)
		return (or_uint(x, lshift_uint(x, pos)));
	if (val == 2)
		return (and_uint(x, rev_uint(lshift_uint(1, pos))));
}

t_uint	revbit_uint(t_uint x, t_uint pos)
{
	return (xor_uint(x, lshift_uint(1, pos)));
}