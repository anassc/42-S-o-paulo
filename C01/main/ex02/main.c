#include "ft_swap.c"
#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int a;
	int b; 
	int *p_a;
	int *p_b;
	a = 12;
	b = 34;
	p_a = &a;
	p_b = &b;

	printf("Antes : %d %d \n", a, b);

	ft_swap(p_a, p_b);
	printf("Depois %d %d", a, b);
	return 0;
}
	

