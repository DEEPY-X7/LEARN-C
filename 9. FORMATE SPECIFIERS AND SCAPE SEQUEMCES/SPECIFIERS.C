
#include <stdio.h>

#define PI 3.14

int main(){
    int a = 8;
    float b = 7.333;
    printf("Hello Worls\n");
    printf("The value of a is %d and The value of b is %f\n", a, b);
    printf("%10.4f\n",b)  //This code prints a space in starting.
    printf("%-10.4f\n",b)  //This code print a space in ending.
    printf("%c") // This code works a printing characters
    printf("%d")  // This code works a printing integer
    printf("%f")   // This code woks a pinrting  floatingpoint numbers
    printf("%l")  //this codes works a printing a long integer
    printf("%lf")  //this code works a printing double 
    printf("%LF")    // this codes works a printing long double
    
    //constant
    // ye kabhi change nahi ho sakta 
    const float c = 100.999999;
    PI = 10.99;  //can not do this since PI is a constant
    printf("%f", PI)
    
    //escape sequince
    printf("\a",) //printing a Alarm or Beep
    printf("\b",) //printing a Backspace
    printf("\f",) //printing a Form Feed
    printf("\n",) //printing a new line
    printf("\r",) //printing a carriage Return
    printf("\t",) //printing a Tab (Horizontal)
    printf("\v",) //printing a Vericle Tab space
    printf("\\",) //printing a Backslash
    printf("\'",) //printing a Single Quote
    printf("\"",) //printing a Double Quote
    printf("\?",) //printing a Question mark
    printf("\nnn",) //printing a octal number
    printf("\xhh",) //printing a hexadecimal number
    printf("\0",) //printing a null

    
    return 0;
}