#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j = 2;    
    for ( i = 0,j = 0; i < 10; i++,j*=2)
    {
        printf("%d %d\n",  j,i );
    }
    
    return 0;
}
