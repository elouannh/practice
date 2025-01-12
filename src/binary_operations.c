/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 22:18:52 by ehosta            #+#    #+#             */
/*   Updated: 2025/01/11 22:18:52 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/algos.h"

t_uint	and_uint(t_uint x, t_uint y)
{
	return (x & y);
}

t_uint	or_uint(t_uint x, t_uint y)
{
	return (x | y);
}

t_uint	xor_uint(t_uint x, t_uint y)
{
	return (x ^ y);
}

t_uint	rev_uint(t_uint x)
{
	return (~x);
}

t_uint	lshift_uint(t_uint x, t_uint shift)
{
	return (x << shift);
}

t_uint	rshift_uint(t_uint x, t_uint shift)
{
	return (x >> shift);
}

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

t_uint	createmask_uint(t_uint x, t_uint start, t_uint length)
{
	return (lshift_uint(lshift_uint(1, length) - 1, start));
}

t_uint	getbitfield_uint(t_uint x, t_uint start, t_uint length)
{
	t_uint	mask;

	mask = createmask_uint(x, 0, start);
	return (and_uint(rshift_uint(x, start), mask));
}

t_uint	setbitfield_uint(t_uint x, t_uint val, t_uint start, t_uint length)
{
	t_uint	mask;

	mask = createmask_uint(x, start, length);
	return (or_uint(and_uint(x, rev_uint(mask)), lshift_uint(val, start)));
}
