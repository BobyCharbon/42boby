#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//#include "libft.h"

/* -------------------------------------------------------------------------- */
/*            Fonction allouant avec Malloc et retourne un tableau            */
/* ------------- de chaine de caractères obtenue en séparant 's' ------------ */
/* ------------------------ à l'aide du caractère 'c' ----------------------- */
/* -------------------------------------------------------------------------- */
/* ------------------ le tableau doit se terminer par NULL ------------------ */
/* -------------------------------------------------------------------------- */

static size_t find_and_split(char *s, char c, size_t x)
{
    while (s[x] || s[x] != c)
    {
        x++;
        if (s[x] == c)
        {
            /* ------------------------------ pas sur du \0 ----------------------------- */
            // s[x] = 0;
            /* -------------------------------------------------------------------------- */
            return (x);
        }
    }
    return (0);
}

char **ft_split(const char *s, char c)
{
    size_t i ;
    size_t x ;
    char **split;
    char *s2_duplicate;
    char *s_duplicate;
    i = 0;
    x = 0;

    s2_duplicate = malloc(sizeof(char));
    s_duplicate = malloc(sizeof(char));
    x = find_and_split((char*) s, c, x);
   
    while (s[i] != s[x])
    {
        s_duplicate[i] = ((char*)s)[i];
        i++;
    }
    while (s[i])
    {
        s2_duplicate[i] = ((char*)s)[i];
        i++;
    }
    // split = malloc(sizeof(s_duplicate + s2_duplicate + 1));
    // return (s_duplicate);
}

int main(void)
{
    char s[] = "Salut mec";
    char c = ' ';
    printf("RESULTAT : |%s|\n", ft_split(s, c));
}