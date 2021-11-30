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

 /* -------------------------------- *CONTENT: ------------------------------- */
 /* ------------------- la donnée contenue dans le maillon ------------------- */
 /* -------------------------------------------------------------------------- */

 /* --------------------------------- *NEXT: --------------------------------- */
 /* ---------------- l'adresse du maillon suivant de la liste ---------------- */
 /* --------------------- NULL si le maillon est dernier --------------------- */
 /* -------------------------------------------------------------------------- */

t_list 
    *ft_lstnew(void *content)
{
    t_list *liste = (t_list*)malloc(sizeof(*liste));

    if (liste == NULL)
        return (NULL);
    liste->content = content;
    liste->next = NULL;
    return (liste);
}

int main(void)
{
    ft_lstnew("salut");
}