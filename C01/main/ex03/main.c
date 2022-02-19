#include " ft_div_mod.c"
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int n;
	int n2;
	int *p_n;
	int *p_n2;

	n = 4;
	n2 = 2;
	
	p_n = &n;
	p_n2 = &n2;

	printf ("Antes : %d %d \n", n, n2);

	ft_div_mod(n, n2, p_n, p_n2);

	printf ("Depois %d %d", n, n2);
}
