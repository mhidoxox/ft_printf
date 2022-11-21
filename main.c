#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char s[] = "ayeeh";
	//char c = 't';
	int nb = 1337;
	int n = printf("%s : %d\n", s, nb);
	printf("len = %d", n);
	return (0);
}
