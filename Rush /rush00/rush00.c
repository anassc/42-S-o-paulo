/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarol3 < ancarol3@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:14:25 by ancarol3          #+#    #+#             */
/*   Updated: 2022/02/05 23:14:54 by ancarol3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	first_last_line(int x);

void	others_line(int x);

void	rush(int x, int y)
{
	int	linha;

	linha = 1;
	while (linha <= y)
	{					
		if (linha == 1 || linha == y)
			first_last_line(x);
		else
			others_line(x);
	linha ++;
	}
}	

void	first_last_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		i ++;
	}
	write (1, "\n", 1);
}

void	others_line(int x)
{
	int	i ;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i ++;
	}
	write (1, "\n", 1);
}
