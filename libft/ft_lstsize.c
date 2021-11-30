#include <string.h>
#include <stdio.h>
#include <unistd.h>

#include "libft.h"

/* -------------------------------------------------------------------------- */
/*                   Compte le nombre d'éléments de la liste                  */
/* -------------------------------------------------------------------------- */
/* ------------------------ lst = Taille de la liste ------------------------ */
/* ------------------ VALEUR DE RETOUR: taille de la liste ------------------ */
/* -------------------------------------------------------------------------- */

int ft_lstsize(t_list *lst)
{
    size_t i;

    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}

// int main(void)
// {
//     t_list *lst;
// }