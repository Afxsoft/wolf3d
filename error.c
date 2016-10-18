/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 17:35:12 by aouloube          #+#    #+#             */
/*   Updated: 2016/10/18 17:35:14 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		check_for_x_y(int x, int y, t_env *e)
{
	if (x <= 0 || x >= WIDTH)
		return (0);
	if (y <= 0 || y >= HEIGHT)
		return (0);
	if (x * 4 + y * e->sl > WIDTH * 4 + HEIGHT * e->sl)
		return (0);
	return (1);
}

void	ft_clean(t_env *e)
{
	int p;

	p = -1;
	while (++p < WIDTH * 4 + HEIGHT * e->sl)
		e->img[p] = 0;
}
