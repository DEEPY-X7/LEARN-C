
/*

km to miles
inches to foot
cms to inches
pound to meters
inches to meter

*/
#include <stdio.h>

int main() {
    double km, miles, inches, feet, cms, inch, pounds, meters;

    // Kilometer to Miles
    printf("Enter distance in kilometers: ");
    scanf("%lf", &km);
    miles = km * 0.621371;
    printf("%.2f km = %.2f miles\n", km, miles);

    // Inches to Feet
    printf("Enter length in inches: ");
    scanf("%lf", &inches);
    feet = inches / 12.0;
    printf("%.2f inches = %.2f feet\n", inches, feet);

    // Centimeters to Inches
    printf("Enter length in centimeters: ");
    scanf("%lf", &cms);
    inch = cms / 2.54;
    printf("%.2f cm = %.2f inches\n", cms, inch);

    // Pounds to Kilograms
    printf("Enter weight in pounds: ");
    scanf("%lf", &pounds);
    meters = pounds * 0.453592;  // Pounds to Kilograms (Correcting "pound to meters" to "pound to kg")
    printf("%.2f pounds = %.2f kilograms\n", pounds, meters);

    // Inches to Meters
    printf("Enter length in inches: ");
    scanf("%lf", &inches);
    meters = inches * 0.0254;
    printf("%.2f inches = %.2f meters\n", inches, meters);

    return 0;
}
