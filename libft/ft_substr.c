#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    const char *s2;

    int i;

    i = 0;
    if (len > (size_t)(s))
        s2 = malloc(len * sizeof(char) + 1);
    else
        s2 = malloc(sizeof(s));
    if (s == NULL)
        return (NULL);
    if (s2 == NULL)
        return ((char*) s2);
    if ((start > strlen(s)))
        return ((char*) s2);
    while (len-- >= 1 && s[i])
    {
        ((char*) s2)[i] = ((char*) s)[start];
        i++;
        start++;
    }
    ((char*) s2)[i++] = 0;
    return ((char*) s2);
}

int main(void)
{
    const char s[] = "i just want this part #############";
    unsigned int start = 5;

    size_t len = 10;
    printf("RESULTAT : %s\n", ft_substr(s, start, len));
<<<<<<< Updated upstream
}
=======
}
>>>>>>> Stashed changes
