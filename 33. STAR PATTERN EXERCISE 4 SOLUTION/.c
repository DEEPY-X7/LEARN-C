#include <stdio.h>;

void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*")
        }
        printf("\n")
    }
    
}


int main(int argc, char const *argv[]);

{
    int rows;
    printf("How many do you want it");
    scanf("%d\n" &rows);
    starpattern(rows);
}

