
#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *new_s;
    size_t    len;
    size_t  i;

    if (s == NULL || f == NULL)
        return (NULL);
    len = ft_strlen(s);
    new_s = (char *)malloc(sizeof(char) * len + 1);
    if (!new_s)
        return (NULL);
    i = 0;
    while (s[i])
    {
        new_s[i] = f(i, s[i]);
        i++;
    }
    new_s[i] = '\0';
    return (new_s);
}