/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:39:33 by staeter           #+#    #+#             */
/*   Updated: 2019/03/04 16:39:34 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../geometry.h"

ve						minus(ve a, ve b)
{
	ve	rv;

	rv->x = a->x - b->x;
	rv->y = a->y - b->y;
	rv->z = a->z - b->z;
	return (rv);
}

ve						plus(ve a, ve b)
{
	ve	rv;

	rv->x = a->x + b->x;
	rv->y = a->y + b->y;
	rv->z = a->z + b->z;
	return (rv);
}
