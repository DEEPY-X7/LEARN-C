

/*//🔹 Union Ka Syntax
union union_name {
    data_type member1;
    data_type member2;
    ...
};*/

//🔹 Example 1: Basic Union
#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    
    data.i = 10;
    printf("data.i = %d\n", data.i);

    data.f = 20.5;
    printf("data.f = %f\n", data.f);

    strcpy(data.str, "Hello");
    printf("data.str = %s\n", data.str);

    return 0;
}
//📌 Output:
data.i = 10
data.f = 20.500000
data.str = Hello


//🔹 Union Ka Memory Concept
#include <stdio.h>

union Test {
    int a;     // 4 bytes
    float b;   // 4 bytes
    char c[10]; // 10 bytes
};

int main() {
    printf("Size of union: %lu\n", sizeof(union Test));
    return 0;
}
//📌 Output:
Size of union: 10


//🔹 Example 2: Union with Structure
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    union Info {
        char name[20];
        float marks;
    } info;
};

int main() {
    struct Student s1;
    s1.roll = 101;
    
    strcpy(s1.info.name, "Deepanshu");
    printf("Roll: %d, Name: %s\n", s1.roll, s1.info.name);

    s1.info.marks = 85.5;  // Overwrites name
    printf("Roll: %d, Marks: %.2f\n", s1.roll, s1.info.marks);

    return 0;
}


//📌 Output:
Roll: 101, Name: Deepanshu
Roll: 101, Marks: 85.50
//❌ "Deepanshu" overwrite ho gaya, kyunki marks aur name same memory share kar rahe hain

//🔹 Example 3: Union for Type Conversion
#include <stdio.h>

union Convert {
    int i;
    float f;
};

int main() {
    union Convert c;
    c.i = 1092616192; // Binary of 10.5 in IEEE 754 format

    printf("Integer: %d\n", c.i);
    printf("Float: %f\n", c.f); // Type conversion

    return 0;
}





































