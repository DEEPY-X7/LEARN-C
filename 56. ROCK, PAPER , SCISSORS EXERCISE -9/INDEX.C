#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int genrateRandomNumber(int n){
    srand(time(NULL));
    return rand();
}





int main(int argc, char const *argv[])
{
    srand(time(NULL)); //srand takes see 
    printf("THe random number between 0 t 100 %d\n", rand()&100);
    return 0;
};

//build a rOCK PAPER SCISSER 

Player 1 : rock
Player 2( Computer ): scissers --> plyer 1 get a 1 point 

rock vs scissors - rock wins
paper vs scisser - scissrs wins 
papre vs rock = papers wins 

// Write a c program to alow to play this game three times with computer log the across off com and the player Display the name of the winnwe at the end

//NOTES: you have to display of the player during the game take user as an input from the winnwr 