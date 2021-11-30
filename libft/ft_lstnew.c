#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

/* -------------------------------------------------------------------------- */
/*                Alloue (avec malloc(3)) et renvoie un nouvel                */
/* ----------- élément. la variable content est initialisée à ----------- */
/* -------------- l’aide de la valeur du paramètre content. La ------------- */
/* ---------------- variable ’next’ est initialisée à NULL. --------------- */
/* -------------------------------------------------------------------------- */
/* --------------------------- VALEUR DE RETOUR : --------------------------- */
/* ---------------------------- le nouvel élément --------------------------- */
/* -------------------------------------------------------------------------- */

t_list *ft_lstnew(void *content)
{
    t_list *liste = malloc(sizeof(*liste));

    if (liste == NULL)
        return (NULL);
    liste->content = content;
    liste->next = NULL;
    return(liste);
}

// int main(void)
// {
//     struct Livre livre1;
//     livre1.annee = 1997;
//     afficher_annee(livre1);
// }