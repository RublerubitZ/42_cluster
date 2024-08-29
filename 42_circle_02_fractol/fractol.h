/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seku <seku@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:04:19 by seku              #+#    #+#             */
/*   Updated: 2024/08/29 19:23:36 by seku             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

// FRACTOL ID
# define MADELBROT	0
# define JULIA		1
# define BURNINGSHIP	2

// SETING
# define MIN_X	-2
# define MIN_Y	-2
# define MAX_X	2
# define MAX_Y	2
# define HEIGHT	800
# define WIDTH	800
# define SCALE_FACTOR	1.15

# include <stdio.h.>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <mlx.h>
# include <X11.X.h>
# include <X11/keysym.h>
# include "libft/libft.h"

// STRUCTURE PART
typedef struct s_complex
{
	double	r;
	double	i;
}	t_complex;

typedef struct s_image
{
	void	*img_ptr;
	char	*addr_ptr;
	int		pixel_bits;
	int		line_len;
	int		endian;
}	t_image;

// MAKING PART
void	change_fractal(int key, t_engine *engine);
void	set_fractal_type(t_engine *engine, char *str);
void	reset_engine(t_engine *engine, int fractal_type);
void	init_engine(t_engine *engine, char *arg);

#endif
