#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array\n", i);
        scanf("%d ", &marks[i]);
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n", i, marks[i]);
    }
    
    marks[0] = 34;
    printf("marks of student 1 is %d", marks[0]);
    marks[0] = 454;
    printf("marks of student 1 is %d", marks[0]);

    return 0;
}
