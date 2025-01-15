/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binop_bitfield.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:34:38 by ehosta            #+#    #+#             */
/*   Updated: 2025/01/13 21:37:24 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "binop.h"

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