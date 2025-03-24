#include <stdio.h>

// Structure definition
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student students[2] = {
        {"Deepanshu", 101, 85.5},
        {"Shivam", 102, 90.0}
    };

    // struct Student s1 = {"Deepanshu", 101, 85.5};
    // struct Student s2 = {"Shivam", 102, 90.0};
    // printf("Name: %s\n", s1.name);
    // printf("Roll No: %d\n", s1.rollNo);
    // printf("Marks: %.2f\n", s1.marks);


    //Array of Structures Example
    for (int i = 0; i < 2; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n\n", students[i].marks);
    }



    //Structure Pointers Example
    
    {
    struct Student s1 = {"Deepanshu", 101, 85.5};
    struct Student *ptr = &s1; // Pointer to structure

    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->rollNo);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}

}