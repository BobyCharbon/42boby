#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

/* -------------------------------------------------------------------------- */
/*            Fonction allouant avec Malloc et retourne un tableau            */
/* ------------- de chaine de caractères obtenue en séparant 's' ------------ */
/* ------------------------ à l'aide du caractère 'c' ----------------------- */
/* -------------------------------------------------------------------------- */
/* ------------------ le tableau doit se terminer par NULL ------------------ */
/* -------------------------------------------------------------------------- */
/* ---------------------------- VALEUR DE RETOUR: --------------------------- */
/* -------------- le tableau de nouvelles chaines de caracères -------------- */
/* ------------------------- résultant du découpage. ------------------------ */
/* ----------------------- NULL si l'allocation échoue ---------------------- */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                          alloue la fonction split                          */
/* -------------------------------------------------------------------------- */
static char **ft_malloc_split(char const *s, char c)
{
    size_t i;
    char **split;
    size_t total;

    i = 0;
    total = 0;
    while (s[i])
    {
        if (s[i] == c)
            total++;
        i++;
    }
    split = (char**)malloc(sizeof(s) * (total + 2));
    if (!split)
        return (NULL);
    return (split);
}

/* -------------------------------------------------------------------------- */
/*                          free la mémoire de split                          */
/* -------------------------------------------------------------------------- */
void *ft_free_split(char **split, size_t elts)
{
    size_t i;

    i = 0;
    while (i < elts)
    {
        free(split[i]);
        i++;
    }
    free(split);
    return (NULL);
}


static void *ft_split_range(char**split, const char *s, t_split_next *st, t_split_next *lt)
{
    split[lt->length] = ft_substr(s, st->start, st->length);
    if (!split[lt->length])
        return (ft_free_split(split, lt->length));
    lt->length++;
    return (split);
}

static void *ft_split_by_char(char **split, const char *s, char c)
{
    size_t i;
    t_split_next st;
    t_split_next lt;

    i = 0;
    lt.length = 0;
    lt.start = 0;
    while(s[i])
    {
        if (s[i] == c)
        {
            st.start = lt.start;
            st.length = (i - lt.start);
            if (i > lt.start && !ft_split_range(split, s, &st, &lt))
                return (NULL);
            lt.start = i + 1;
        }
        i++;
    }
    st.start = lt.start;
    st.length = (i - lt.start);
    if (i > lt.start && i > 0 && !ft_split_range(split, s, &st, &lt))
        return (NULL);
    split[lt.length] = 0;
    return (split);
}

char **ft_split(const char *s, char c)
{
    char **split;
    
    if (!(split = ft_malloc_split(s, c)))
        return (NULL);
    if (!ft_split_by_char(split, s, c))
        return (NULL);
    return (split);
}

// int main(void)
// {
//     char s[] = "Salut mec";
//     char c = ' ';
//     printf("RESULTAT : |%s|\n", ft_split(s, c));
// }