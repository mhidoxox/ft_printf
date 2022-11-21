#include "ft_printf.h"

int	ft_prtnbr(int	nb)
{
	char	*s;
	int	len;

	s = ft_itoa(nb);
	len = ft_prtstr(s);
	return (len);
}
