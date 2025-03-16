#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hwllo World\n");
    int i,age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\nEnter Your age \n", i);
        scanf("%d", &age);
        if (age>10)
        {
            // break;
            // continue;
        }
        
    }
    
    return 0;
}
