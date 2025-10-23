#include "libft.h"

#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void *ptr;

	total = count * size;
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, total);
	return (ptr);
}