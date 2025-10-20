#include "libft.h"

#include <stddef.h>

void *ft_memset(void *b, int i, size_t len)
{
    unsigned char *c;

	c = (unsigned char *)b;
    
    while (len > 0)
    {
        *c = i;
        len--;
        c++;
    }
    return b;
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* #include <stdio.h>

int	main(void)
{
	char	text[7] = "adriana";
	int		i;

	i = 0;
	ft_bzero(text, 5);
	printf("result:\n");
	while(i < 7)
	{
		printf("%d ", text[i]);
		i++;
	}
	printf("\n");
	return(0);
} */