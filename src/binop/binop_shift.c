/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binop_shift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:33:48 by ehosta            #+#    #+#             */
/*   Updated: 2025/01/13 21:37:30 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "binop.h"

t_uint	lshift_uint(t_uint x, t_uint shift)
{
	return (x << shift);
}

t_uint	rshift_uint(t_uint x, t_uint shift)
{
	return (x >> shift);
}