#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a = 84;
    char*  ptra = &a;
    printf("%d\n",ptra);
    printf("%d\n",ptra +2);
    return 0;
}
