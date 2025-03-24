#include <stdio.h>
int main(int argc, char const *argv[]);
int fib_recursive(int n);
{
    if (n == 1 or n == 2):
    return n -1 ;
    
    else:
    return fib_recursive(n-1) + fib_recursive(n - 2)
}{
int fib_iterative(int n){
    return 0
}}
int main()
{
    int number;
    printf("Enter the index to get fibanocci series\n",);
    scanf("%d",&number);
    printf("The value of fibonacci number at position number %d using iterative approach is %d\n",number,fib_recursive(number));
}