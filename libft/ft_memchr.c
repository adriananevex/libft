#include "libft.h"

#include <stddef.h>

void	*ft_memchr(const void *c, int i, size_t n)
{
	unsigned char	*s;
	unsigned char	t;
	size_t	j;

	s = (unsigned char *)c;
	t = (unsigned char)i;
	j = 0;
	while (j < n)
	{
		if (s[j] == t)
		{
			return (void *) &s[j];
		}	
		j++;
	}
	return (NULL);
}