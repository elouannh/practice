/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binop_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:32:57 by ehosta            #+#    #+#             */
/*   Updated: 2025/01/13 21:37:32 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "binop.h"

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