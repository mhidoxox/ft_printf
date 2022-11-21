#include "ft_printf.h"

int	ft_prntype(va_list args, char type)
{
	int len;

	len = 0;
	if (type == 'c')
		len += ft_prtchar(va_arg(args, int));
	else if (type == 's')
		len += ft_prtstr(va_arg(args, char *));
	else if (type == 'd')
		len += ft_prtnbr(va_arg(args, int));
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int	i;
	va_list	args;
	int	len;

	va_start(args, s);
	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			len += ft_prntype(args, s[i + 1]);
			i++;
		}
		else
			len += ft_prtchar(s[i]);
		i++;
	}
	va_end(args);
	return (i);
}

