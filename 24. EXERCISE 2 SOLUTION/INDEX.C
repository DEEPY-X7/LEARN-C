
/*

km to miles
inches to foot
cms to inches
pound to meters
inches to meter

*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int choice;
    float km, miles, inches, foot, cms, pound, meters;
    // Kilometer to Miles
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    miles = km * 0.621371;
    printf("Distance in miles: %lf\n", miles);

    // Inches to Foot
    printf("Enter distance in inches: ");
    scanf("%f", &inches);
    foot = inches / 12;
    printf("Distance in foot: %lf\n", foot);

    // Cms to Inches        
    printf("Enter distance in cms: ");
    scanf("%f", &cms);
    inches = cms / 2.54;
    printf("Distance in inches: %lf\n", inches);

    // Pound to Meters
    printf("Enter weight in pounds: ");
    scanf("%f", &pound);
    meters = pound / 2.20462;
    printf("Weight in meters: %lf\n", meters);

    // Inches to Meter
    printf("Enter distance in inches: ");
    scanf("%f", &inches);
    meters = inches / 39.3701;
    printf("Distance in meters: %lf\n", meters);


    return 0;
}

   