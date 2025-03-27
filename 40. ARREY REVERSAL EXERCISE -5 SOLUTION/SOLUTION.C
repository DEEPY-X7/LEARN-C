#include <stdio.h>
#include <unistd.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int i;

    while (1)
    {
        printf("\nReverse order :");
        for (i = 6; i >= 0; i--)
        {
            printf("%d", arr[i]);
        }

        printf("\nForward Order:");
        for (i = 0; i < 7; i++)
        {
            printf("%d", arr[i]);
        }
        printf("\n");

        sleep(1);
    }
    return 0;
}