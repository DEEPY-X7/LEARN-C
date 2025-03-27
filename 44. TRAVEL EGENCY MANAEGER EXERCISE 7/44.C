// #include <stdio.h>
/*
You manage a travel agency you want your n drivers to input their following details:
1. Name 
2. Driving Licence Number
3. Route  From - To
4. Kms
Your Program should be able to take n as input (or you can take n=3 for simplicity) and you delivers Will start inputing their detail one by one 

Your Program should print details of the drivers in a beutifull fashion
*/
#include <stdio.h>

int main() {
    char name[50];
    char DL[20];
    char From[50];
    char To[50];
    int Km;

    printf("Please Enter Your Name: ");
    scanf(" %[^\n]s", name); // पूरा नाम लेने के लिए

    printf("Please Enter Your Driving Licence Number: ");
    scanf(" %[^\n]s", DL);

    printf("Please Enter Your Delivery Pickup Location Name: ");
    scanf(" %[^\n]s", From);

    printf("Please Enter Your Destination Name: ");
    scanf(" %[^\n]s", To);

    printf("Please Enter Estimated Kms: ");
    scanf("%d", &Km);

    printf("\n=========== Driver Details ===========\n");
    printf("🔹 Name: %s\n", name);
    printf("🔹 Driving Licence Number: %s\n", DL);
    printf("🔹 Route: %s ➝ %s\n", From, To);
    printf("🔹 Estimated Kilometers: %d Km\n", Km);

    return 0;
}
