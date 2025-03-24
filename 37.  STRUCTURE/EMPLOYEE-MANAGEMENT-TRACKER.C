#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "employee_data.txt"

struct Employee {
    char name[50];
    int id;
};

// Function to register a new employee
void registerEmployee() {
    struct Employee e;
    FILE *file = fopen(FILENAME, "a");  // Append mode me file open
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter Employee Name: ");
    scanf(" %[^\n]", e.name);  // Space added to handle multi-word names

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    fprintf(file, "%d %s\n", e.id, e.name);  // File me save karna
    fclose(file);

    printf("Employee Registered Successfully!\n");
}

// Function to mark attendance
void markAttendance() {
    int id;
    char name[50];
    int found = 0;

    printf("\nEnter Your Employee ID to Mark Attendance: ");
    scanf("%d", &id);

    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("No Employees Found! Please Register First.\n");
        return;
    }

    // Searching for Employee ID
    while (fscanf(file, "%d %[^\n]", &id, name) != EOF) {
        if (id == id) {
            found = 1;
            break;
        }
    }
    fclose(file);

    if (found) {
        FILE *attFile = fopen("attendance.txt", "a");
        fprintf(attFile, "%d %s Present\n", id, name);
        fclose(attFile);
        printf("Attendance Marked Successfully for %s (ID: %d)\n", name, id);
    } else {
        printf("Employee Not Found! Please Register First.\n");
    }
}

// Function to view attendance records
void viewAttendance() {
    FILE *file = fopen("attendance.txt", "r");
    char line[100];

    if (file == NULL) {
        printf("No Attendance Records Found!\n");
        return;
    }

    printf("\nAttendance Records:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Employee Attendance System ---\n");
        printf("1. Register Employee\n");
        printf("2. Mark Attendance\n");
        printf("3. View Attendance\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerEmployee();
                break;
            case 2:
                markAttendance();
                break;
            case 3:
                viewAttendance();
                break;
            case 4:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}