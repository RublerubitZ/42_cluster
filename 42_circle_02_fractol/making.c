/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   making.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:01:40 by seku              #+#    #+#             */
/*   Updated: 2024/08/29 18:11:51 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	check_fractal_type(t_engine *engine, char *str)
{
	if (!engine || !str)
		return ;
	if (ft_strcmp(str, "mandelbrot") == 0)
		engine->fractal.type = MANDELBROT;
	if (ft_strcmp(str, "julia") == 0)
		engine->fractal.type = JULIA;
	if (ft_strcmp(str, "burningship") == 0)
		engine->fractal.type = BURNINGSHIP;
	else
		show_help();

}
