#include "libft.h"

int	ft_isalpha(int d)
{
	if (d >= '0' && d <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}