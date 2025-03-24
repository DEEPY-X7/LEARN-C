#include <stdio.h>

void changevalue(int *a){
    *address = 345;
}
int main(int argc, char const *argv[])
{
    int a = 34, b = 56;
    printf("the value of noe is %d\n" a);
    changevalue(&a);
    printf("the value of noe is %d\n" a);
    return 0;
}



//quick quiz - Given two numbers a and b, add then substract then and assign then to a and b using call by refrence. 
// a =4;
// b = 3;
// after running the function , the value of and be should be:
// a=7;
// b=1;

int a,b = (4,3);
