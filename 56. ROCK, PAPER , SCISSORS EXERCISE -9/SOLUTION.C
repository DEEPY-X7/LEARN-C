#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>  // Required for toupper()

// Function to generate a random number
int generateRandomNumber(int n) {
    return rand() % n;  // Generates a number between 0 and n-1
}

// Function to get the full name of the choice (Rock, Paper, Scissors)
const char* getChoiceName(char choice) {
    if (choice == 'R') return "Rock";
    if (choice == 'P') return "Paper";
    if (choice == 'S') return "Scissors";
    return "Invalid";  // In case of an unexpected value
}

int main() {
    char name[50], userChoice, computerChoice;
    int userScore = 0, computerScore = 0;
    char choices[] = {'R', 'P', 'S'};

    srand(time(NULL));  // Initialize random number generator

    // Ask for user's name
    printf("Hey User, Please Enter Your Name: ");
    scanf("%s", name);

    printf("\nWelcome, %s! Let's Play Rock Paper Scissors Game.\n", name);

    // Loop for 3 rounds
    for (int i = 0; i < 3; i++) {
        printf("\nRound %d - Choose one: R = Rock, P = Paper, S = Scissors: ", i + 1);
        scanf(" %c", &userChoice);

        userChoice = toupper(userChoice);  // Convert lowercase input to uppercase

        // Check for valid input
        if (userChoice != 'R' && userChoice != 'P' && userChoice != 'S') {
            printf("Invalid choice! Please enter R, P, or S only.\n");
            i--;  // Repeat the round for invalid input
            continue;
        }

        // Generate random choice for computer
        computerChoice = choices[generateRandomNumber(3)];

        // Display user and computer choices
        printf("You chose: %s\n", getChoiceName(userChoice));
        printf("Computer chose: %s\n", getChoiceName(computerChoice));

        // Game logic
        if ((userChoice == 'R' && computerChoice == 'S') ||
            (userChoice == 'P' && computerChoice == 'R') ||
            (userChoice == 'S' && computerChoice == 'P')) {
            printf("You win this round! 🎉\n");
            userScore++;
        } else if (userChoice == computerChoice) {
            printf("It's a tie! 🤝\n");
        } else {
            printf("Computer wins this round! 💻\n");
            computerScore++;
        }
    }

    // Display final scores
    printf("\nFinal Score - %s: %d | Computer: %d\n", name, userScore, computerScore);

    // Determine the final winner
    if (userScore > computerScore) {
        printf("🎉 Congratulations %s, You are the Winner!\n", name);
    } else if (userScore < computerScore) {
        printf("💻 Computer wins the game! Better luck next time, %s.\n", name);
    } else {
        printf("🤝 It's a tie! Well played, %s.\n", name);
    }

    return 0;
}


// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>



// int genrateRandomNumber(int n){
//     srand(time(user));
//     return ();
// }

// // {
// // int user;
// // int rock;
// // int paper;
// // int scissor;
// // }

// {int RandomGame(time(NULL));
//     printf(********"Welcome!, Rock Paper Scissor Game Ready For Winning Let`s Go!..."********)
//     scanf("Hey User Please Enter Your Name %d\n"user);
//     scanf("Choose any One Of These Following Syntax R = Rock, S = scisser, P = Paper%d\n"&rock,&paper,&scissor)
// }

// int main(int argc, char const *argv[])
// {
//     /* code */
//     return 0;
// }
