/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 19:40:28 by staeter           #+#    #+#             */
/*   Updated: 2019/03/04 19:40:29 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

double 			norm(ve v)
{
	return (sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2)));
}

ve				*unit(ve v, ve *ret)
{
	double	n;

	n = norm(v);
	ret->x = v.x / n;
	ret->y = v.y / n;
	ret->z = v.z / n;
	return (ret);
}
