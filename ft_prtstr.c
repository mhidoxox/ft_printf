#include "ft_printf.h"

int	ft_prtstr(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len += ft_prtchar(str[i]);
		i++;
	}
	return (len);
}
