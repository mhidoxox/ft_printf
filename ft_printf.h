#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(const char *s, ...);
int	ft_prtchar(char c);
int	ft_prtstr(char *str);
char	*ft_itoa(int n);
int	ft_prtnbr(int nb);

#endif
