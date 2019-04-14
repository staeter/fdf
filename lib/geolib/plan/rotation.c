/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 18:34:57 by staeter           #+#    #+#             */
/*   Updated: 2019/03/04 18:34:59 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

pl				*rot_p(matrix *rot_matrix, ve *rot_center, pl *plan)
{
	dot_mv(rot_matrix, plan->l, &plan->l);
	dot_mv(rot_matrix, plan->m, &plan->m);
	dot_mv(rot_matrix, plan->n, &plan->n);
	rot_v(rot_matrix, rot_center, &plan->p);
	return (plan);
}
