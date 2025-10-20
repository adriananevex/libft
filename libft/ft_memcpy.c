#include "libft.h"

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;

	while(n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return(dst);
}


/* #include <stdio.h>

int main(void)
{
	char src[8] = "ADRIANA";
	char dst[8];

	ft_memcpy(dst, src, 8);

	printf("dst: %s\n", dst);
	return(0);
} */