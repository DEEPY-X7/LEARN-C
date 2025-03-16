#include <stdio.h>

int main()
// while loop
{
    int i = 0;
    while (i < 10)
    {
        printf("the value of int %d", i);
        i++;
    }
}

// quick quiz - write a program to print a natural number 10 to 20 when initital loop counter i is initialized to 0
{
    int i = 0 while (i < 20)
    {
        printf("the value of int %d", i);
        i++;
    }
}

// Quich Quiz: Write a program to print first n natural numbers using a do while loop

do
{
    int i = 0;
    printf("the value of int %d", i);
    i++;
} while (i < 5);

// for loop
{
    int a = 0;
    for (size_t i = 0; i < 100; i++)
    {
        printf("%d", i + 1)
            printf("\n")
    }
}

// quick quiz - write a program to print first n natural number using for loop
{
    int a = 0;
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d", i + 1)
            printf("\n")
    }
}

// a case of decrement for loop
{
    int a = 0;
    for (size_t i = 0; i < 100; i--)
    {
        printf("%d", i - 1)
            printf("\n")
    }
}

// quick quiz write a program  to print n natural numbers in reverse order
{
    int n = 0;
    for (size_t i = 0; i < 100; i--)
    {
        printf("%d", i - 1)
            printf("\n")
    }
}

//break statement 
{
    int a = 0;
    for (size_t i = 0; i < 200; i++)
    {
        printf("%d", i + 1)
        if (i == 20)    
        {
            break;       // stop at 20 not 200
        }
    }
}