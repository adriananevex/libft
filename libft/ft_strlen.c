#include "libft.h"

#include <stddef.h>

size_t	ft_strlen(const char *c)
{
    size_t i;

    i = 0;
    while (c[i])
    {
        i++;
    }
    return (i);
}

/* #include <stdio.h>

int main(void)
{
	const char *c = "adriana";
	printf("%d", ft_strlen(c));
	return (0);
} */