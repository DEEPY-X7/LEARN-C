#include <stdio.h>
int main()
{
    int i = 8;
    int *j;
    printf("Add i %u\n",&i);
    printf("Add i %u\n",&j);
    printf("Add j %u\n",&j);
    printf("Value i %d\n",&i);
    printf("Value i %d\n",&i);
    printf("Value i %d\n",&j);
}


    void swap(int *x,int *y) {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }

// {
//     int *j;
//     j = &i;
//     return 0;
// }
// int *ch_ptr;
// float *ch_ptr;
// char *ch_ptr;
