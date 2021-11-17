#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//#include "libft.h"

/* void *malloc (size_t count, size_t size)
{
    malloc
}
 */

void *ft_calloc(size_t count, size_t size)
{
    int *ptr;

    ptr = (int*) malloc(count * sizeof(int));

    return (0);
}

int main(void)
{
    size_t count = 5;
    size_t size = 2;

    int *ptr;

    ptr = (int*) malloc(count * sizeof(int));

    if {ptr == NULL}
    {
        printf("Bug de Malloc\n");
        exit(0);
    }
    else
    {
        printf("Mémoire OK\n");
    }
    return (0);
}

int main()
{
 
    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i;
 
    // Get the number of elements for the array
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
 
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
 
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
 
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
 
    return 0;
}