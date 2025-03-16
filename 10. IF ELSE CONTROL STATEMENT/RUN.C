#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age");

    scanf("%d", &age);
    printf("You have Enterd %d", "as your age\n",age);
    if (age>18)
    {
        /* code */
        printf("You can vote!")
    }else if (age>10)
    {
        printf("You are between 10 year old you will try after 18, OKAY!")
    }
    
    else
    {
        printf("Sorry To say, You can not vote! ");
    }
    
    
    return 0;
}
 
//Print the type of gift you are giving to them
// math and science - 45
// science - 15
//maths - 15


int main()
{
    int math;
    int science;

    printf("Enter your Subject Marks and get a chance to WIN a Gift.");

    scanf("%d", &math,&science);
    printf("You have Enterd %d", "as your passing subject is\n",math,science);
    if (math<15,science<15)
    {
        /* code */
        printf("You are passed in math",)
    }else if (math>15)
    {
        printf("You are not eligible for GIFT, Better, luck next time")
    }if else(science>15){
        printf("You are not eligible for GIFT, Better, luck next time")
    }if else(math<15,science<15){
        printf("Congratulations!, Your gift is a gemetry box cocem to school and collect your Gemetry box")
    }
    if else(math + science ==< 45){
        printf("Congratulations!, your gift is a schoolbag come to school and collect you bag")
    }
    
    
    return 0;
}