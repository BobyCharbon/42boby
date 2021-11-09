#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* My memcmp implementation */
int mymemcmp( const void * pointer1, const void * pointer2, size_t size ) {
    unsigned long position;
    for( position=0; position<size; ++position ) {
        int delta = *(unsigned char *)pointer1++ - *(unsigned char *)pointer2++;
        if ( delta ) return delta;
    }
    return 0;
}

int main() {

    int array1 [] = { 54, 85, 20, };
    int array2 [] = { 54, 85, 20, };
    size_t size = sizeof( int ) * 5;

    assert( memcmp( array1, array2, size) == mymemcmp( array1, array2, size) );       
    assert( memcmp( array1, array1, size) == mymemcmp( array1, array1, size) );       
    assert( memcmp( array2, array1, size) == mymemcmp( array2, array1, size) );       
    
        printf( "VRAI : %d\n", mymemcmp(array1, array2, size));
    
    return 0;
}