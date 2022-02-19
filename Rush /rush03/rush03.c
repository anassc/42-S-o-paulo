/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:29:29 by wborges-          #+#    #+#             */
/*   Updated: 2022/02/07 02:25:12 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char p);
void	ft_rectangle_test(int x, int y);
void	ft_first_last_line(int x);
void	ft_other_lines(int x);

void	rush(int x, int y)
{
	int	lin;

	ft_rectangle_test(x, y);
	lin = 1;
	while (lin <= y)
	{
		if (lin == 1 || lin == y)
			ft_first_last_line(x);
		else
			ft_other_lines(x);
		lin ++;
	}
}

void	ft_first_last_line(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar('A');
		else if (col == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		col ++;
	}
	write(1, "\n", 1);
}

void	ft_other_lines(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1 || col == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		col ++;
	}
	write(1, "\n", 1);
}

void	ft_rectangle_test(int x, int y)
{
	if (x <= 0 || y <= 0)
		write(1, "Os números informados não formam um retangulo\n", 48);
}
