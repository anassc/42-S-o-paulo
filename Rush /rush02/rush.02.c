/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarol3 < ancarol3@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:10:29 by ancarol3          #+#    #+#             */
/*   Updated: 2022/02/05 22:42:36 by ancarol3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// declarando as funções que serão utilizadas.

void	ft_putchar(char c);

void	first_line(int x);

void	last_line(int x);

void	others_line(int x);

void	rush(int x, int y)
{
	int	linha;

	linha = 1;
	while (linha <= y)
	{					
		if (linha == 1)
			first_line(x);
		else if (linha == y)
			last_line(x);
		else
			others_line(x);
	linha ++;
	}
}	

void	first_line(int x)
{
	int	counter ;

	counter = 1;
	while (counter <= x)
	{
		if (counter == 1 || counter == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		counter ++;
	}
	write(1, "\n", 1);
}

void	last_line(int x)
{
	int	counter2;

	counter2 = 1;
	while (counter2 <= x)
	{
		if (counter2 == 1 || counter2 == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	counter2 ++;
	}		
	write (1, "\n", 1);
}

void	others_line(int x)
	{
	int	counter3;

	counter3 = 1 ;
	while (counter3 <= x)
	{
		if (counter3 == 1 || counter3 == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		counter3++;
	}
	write (1, "\n", 1);
}
