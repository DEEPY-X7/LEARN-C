#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    printf("\n");
}

int takenumber(){
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    return i;
}

int main(int argc, char const *argv[])
{
    int a,b;
    a = 9;
    b = 87;
    int sum = a+b;
    printf("The sum is %d\n", sum);
    return 0;
}
