#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*)malloc(sizeof(int));

    *ptr = 5;

    int* ptr2 = (int*) realloc(ptr,8);

    printf("%d\n",*ptr2);
    printf("%d\n",*(ptr2+1));

    int* ptr3 = (int*) realloc(ptr2,4);

    printf("%d\n",*ptr3);
    printf("%d\n",*(ptr3+1));
    printf("%d\n",*(ptr3+2));

    free(ptr);
    free(ptr2);
    free(ptr3);

    return 0;
}