#include <stdio.h>

typedef struct TYPEDEF
{
    int id;
    int marks;
    int Fav_char;
    int name;
}std;


int main()
{
    int* a, b;
    int c = 89;
    a =  &c;


//    std s1, s2;
//    s1.id = 56;
//    s2.id = 98;
//    printf("Value of s1 Id is %d\n", s1.id) ;
//    printf("Value of s2 Id is %d\n", s2.id) ;
}







// typedef unsigned long ul;
//     ul l1, l2,l3,l4;

//     return 0;







//🔹 Basic Syntax:
typedef existing_data_type new_name;

//Example 1: Simple Typedef
#include <stdio.h>

typedef unsigned int uint;  // unsigned int ka alias "uint"

int main() {
    uint x = 10;  // Ab hume baar-baar "unsigned int" likhne ki zaroorat nahi
    printf("%u\n", x);
    return 0;
}


//Example 2: Typedef with struct
#include <stdio.h>

typedef struct {
    int roll;
    char name[20];
} Student;

int main() {
    Student s1 = {101, "Deepanshu"};
    printf("Roll No: %d, Name: %s\n", s1.roll, s1.name);
    return 0;
}

