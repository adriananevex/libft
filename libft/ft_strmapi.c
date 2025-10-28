#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char const    *str;

    str = malloc(ft_strlen(s) + 1);
    if (!str)
    {
        return (NULL);
    }
    
}