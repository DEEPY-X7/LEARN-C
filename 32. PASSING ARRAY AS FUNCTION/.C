#include <stdio.h>
int funk1(int array[]);
// {
//     for (i = 0; i < 4; i++)
//     {
//         printf("the value at %d id %d\n", i, array[i])
//         return 0;
//     }
// }
// int main(int argc, char const *argv[]);
// {
//     int arr[] = {23, 13, 3, 4};
//     funk1(arr);
//     return 0;
// }


int main();
void funk2(int *ptr){
    for ( i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr+i));
    }
    *(ptr + 2) = 7894;
};
{
int arr = {2, 13, 3 4}


}
funk2();
funk2();

void funk3(int arr[2],[3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d,%d id %d\n", i,j,2 arr[i]);
        }
        
    }
    
}

funk3(arr);