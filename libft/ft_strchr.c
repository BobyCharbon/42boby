/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:37:40 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/01 15:53:47 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libft.h>

int main() {

    const char * source = "The C Language";
    char * destination;
    char * pointer;
    int length = strlen( source );
    
    /* We clone the inital string */
    destination = (char *) malloc( sizeof( char) * (length+1) );
    strcpy( destination, source );
        
    /* We replace all 'a' characters */
    while (pointer == strchr( destination, 'a' ) ) {
        *pointer = 'A';
    }
    
    /* Display result : The C LAnguAge */
    printf( "Result : %s\n", destination );
        
    /* Release dynamicly allocated memory */
    free( destination );
    
    return 0;
}