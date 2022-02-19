/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarol3 < ancarol3@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:29:03 by ancarol3          #+#    #+#             */
/*   Updated: 2022/02/06 00:11:54 by ancarol3         ###   ########.fr       */
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
	int i;

	i = 1;

	while (i <= x)
	{
		if (i == 1  )
			ft_putchar('/');
		else if (i == x)
			ft_putchar( 92 );
		else 
			ft_putchar('*');
		i ++;
	}
	write (1, "\n", 1);
}

void	last_line(int x)
{
	int	counter2;

	counter2 = 1;
	while (counter2 <= x)
	{
		if (counter2 == 1 )
			ft_putchar(47);
		else if (counter2 == x)
			ft_putchar( 92 );
		else
		{
			ft_putchar('*');
		}
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
			ft_putchar('*');
		else
			ft_putchar(' ');
		counter3++;
	}
	write (1, "\n", 1);
}