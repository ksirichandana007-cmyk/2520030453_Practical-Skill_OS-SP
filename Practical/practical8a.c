#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, *b;

    // malloc()
    a = (int *)malloc(5 * sizeof(int));

    // calloc()
    b = (int *)calloc(5, sizeof(int));

    // realloc()
    a = (int *)realloc(a, 10 * sizeof(int));

    // free()
    free(a);
    free(b);

    return 0;
}
