/********************************************************************************
Compiling the program
The program should be compiled using the following flags: -std=c99 -Wall

compiling:
gcc -std=c99 -Wall kazanciKayraA1.c

Running: ./a.out
OR
gcc -std=c99 -Wall kazanciKayraA1.c -o Mixed_Treasures
Running the Program: ./Mixed_Treasures
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int birthYear;
int fourthDigit;
int thirdDigit;
int secondDigit;
int firstDigit;
int starCount = 0;
int luckyNumber;
char questionAnswer;
char lifelineAnswer;
int lifelineCounter = 0;
int x;

printf("\nEnter your birth Year (yyyy): "); //birthyear input
scanf(" %d", &birthYear);
while (birthYear < 1000 || birthYear > 9999){ //birthyear limitations
    printf("\nEnter your birth Year (yyyy): ");
    scanf(" %d", &birthYear);
}

fourthDigit = birthYear % 10; //gets the fourth digit
thirdDigit = ((birthYear - fourthDigit) % 100) / 10; //gets the third digit
secondDigit = (((birthYear - fourthDigit) - (thirdDigit * 10)) %1000) / 100; //gets the second digit
firstDigit = (((birthYear - fourthDigit) - (thirdDigit * 10)) - (secondDigit * 100)) /1000; //gets the first digit

luckyNumber = firstDigit + secondDigit + thirdDigit + fourthDigit; //adds up the digits

printf("\n");

while (starCount <25){ //create row of stars
    printf("*");
    starCount = starCount + 1;
}

printf ("\nWelcome to Mixed Treasures\nYour Lucky Number is %d\n", luckyNumber); //displays welcome message

starCount = 0;
while (starCount <25){ //create row of stars
    printf("*");
    starCount = starCount + 1;
}

printf("\n\n");


//question 1


printf("Question 1: Here is the $100 question\n\nWhat is the University of Guelph's mascot?\nA. Dragon\nB. Centaur\nC. Aggie\nD. Gryphon\n\n"); //displays first question
printf("Would you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
scanf(" %c", &lifelineAnswer);
while (lifelineAnswer != 'Y' && lifelineAnswer != 'y' && lifelineAnswer != 'N' && lifelineAnswer != 'n'){ //repeatedly checks for correct input
    printf("\nWould you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
    scanf(" %c", &lifelineAnswer);
}
printf("\n");

if (lifelineCounter == 0){

if (lifelineAnswer == 'n' || lifelineAnswer == 'N'){ //this if-else checks if the player wants to use their lifeline and uses it if it is wanted
    printf("Enter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
        scanf(" %c", &questionAnswer);
    }
    } else if (lifelineAnswer == 'y' || lifelineAnswer == 'Y'){
    printf("OK - here are your 2 choices after using the 50-50 lifeline\n\nA. Dragon\nD. Gryphon\n\n");
    printf("Reminder - You get only 1 lifeline - and you are using it now\n\n");
    printf("Enter your FINAL ANSWER ('A', 'D') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'D') here: ");
        scanf(" %c", &questionAnswer);
    }
    lifelineCounter = lifelineCounter + 1;
    } 
}

if (questionAnswer == 'D'){ //displays congrats message if player selects correct answer

    srand (time(NULL));
    x=(rand()%5) + 1;

    if (x==1){
    printf("\nBravo, you just won $100\nLet us play the next question now\n\n");
    } else if (x==2){
    printf("\nCongrats, you just won $100\nLet us play the next question now\n\n");
    } else if (x==3){
    printf("\nWell done, you just won $100\nLet us play the next question now\n\n");
    } else if (x==4){
    printf("\nVery nice, you just won $100\nLet us play the next question now\n\n");
    } else if (x==5){
    printf("\nProud of you, you just won $100\nLet us play the next question now\n\n");
    } 

}else if (questionAnswer == 'A' || questionAnswer == 'B' || questionAnswer == 'C'){ //displays message to inform player of incorrect answer
    printf("\nOops - that was incorrect. You won zero dollars, but it was fun playing with you.\n\n");
    return 0;
}


//question 2


printf("Question 2: Here is the $500 question\n\nWhat is the name of the cannon that is painted by students?\nA. Old Jeremiah\nB. Painty McPaintFace\nC. George III\nD. Duke of Wellington\n\n"); //displays second question
if (lifelineCounter == 0){
    printf("Would you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
    scanf(" %c", &lifelineAnswer);
    while (lifelineAnswer != 'Y' && lifelineAnswer != 'y' && lifelineAnswer != 'N' && lifelineAnswer != 'n'){ //repeatedly checks for correct input
    printf("\nWould you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
    scanf(" %c", &lifelineAnswer);
}
}
printf("\n");

if (lifelineCounter == 0){

if (lifelineAnswer == 'n' || lifelineAnswer == 'N'){ //this if-else checks if the player wants to use their lifeline and uses it if it is wanted
    printf("Enter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
        scanf(" %c", &questionAnswer);
    }
    } else if (lifelineAnswer == 'y' || lifelineAnswer == 'Y'){
    printf("OK - here are your 2 choices after using the 50-50 lifeline\n\nA. Old Jeremiah\nB. Painty McPaintFace\n\n");
    printf("Reminder - You get only 1 lifeline - and you are using it now\n\n");
    printf("Enter your FINAL ANSWER ('A', 'B') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'B') here: ");
        scanf(" %c", &questionAnswer);
    }
    lifelineCounter = lifelineCounter + 1;
    } 
} else {
    printf("Enter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
    scanf(" %c", &questionAnswer);
}

if (questionAnswer == 'A'){ //displays congrats message if player selects correct answer

    srand (time(NULL));
    x=(rand()%5) + 1;

    if (x==1){
    printf("\nBravo, you just won $500\nLet us play the next question now\n\n");
    } else if (x==2){
    printf("\nCongrats, you just won $500\nLet us play the next question now\n\n");
    } else if (x==3){
    printf("\nWell done, you just won $500\nLet us play the next question now\n\n");
    } else if (x==4){
    printf("\nVery nice, you just won $500\nLet us play the next question now\n\n");
    } else if (x==5){
    printf("\nProud of you, you just won $500\nLet us play the next question now\n\n");
    } 

}else if (questionAnswer == 'B' || questionAnswer == 'C' || questionAnswer == 'D'){ //displays message to inform player of incorrect answer
    printf("\nOops - that was incorrect. You won $100 dollars. It was fun playing with you.\n\n");
 return 0;
}


//question 3


printf("Question 3: Here is the $1,000 question\n\nWho was the School of Computer Science building at UoG named after?\nA. Joseph Reynolds\nB. Ryan Reynolds\nC. Joshua Reynolds\nD. Greg Klotz\n\n"); //displays third question
if (lifelineCounter == 0){
    printf("Would you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
    scanf(" %c", &lifelineAnswer); 
    while (lifelineAnswer != 'Y' && lifelineAnswer != 'y' && lifelineAnswer != 'N' && lifelineAnswer != 'n'){ //repeatedly checks for correct input
    printf("\nWould you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
    scanf(" %c", &lifelineAnswer);
}
}
printf("\n");

if (lifelineCounter == 0){

if (lifelineAnswer == 'n' || lifelineAnswer == 'N'){ //this if-else checks if the player wants to use their lifeline and uses it if it is wanted
    printf("Enter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
        scanf(" %c", &questionAnswer);
    }
    } else if (lifelineAnswer == 'y' || lifelineAnswer == 'Y'){
    printf("OK - here are your 2 choices after using the 50-50 lifeline\n\nA. Joseph Reynolds\nB. Ryan Reynolds\n\n");
    printf("Reminder - You get only 1 lifeline - and you are using it now\n\n");
    printf("Enter your FINAL ANSWER ('A', 'B') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'B') here: ");
        scanf(" %c", &questionAnswer);
    }
    lifelineCounter = lifelineCounter + 1;
    } 
} else {
    printf("Enter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
    scanf(" %c", &questionAnswer);
}

if (questionAnswer == 'A'){ //displays congrats message if player selects correct answer

    srand (time(NULL));
    x=(rand()%5) + 1;

    if (x==1){
    printf("\nBravo, you just won $1,000\nLet us play the next question now\n\n");
    } else if (x==2){
    printf("\nCongrats, you just won $1,000\nLet us play the next question now\n\n");
    } else if (x==3){
    printf("\nWell done, you just won $1,000\nLet us play the next question now\n\n");
    } else if (x==4){
    printf("\nVery nice, you just won $1,000\nLet us play the next question now\n\n");
    } else if (x==5){
    printf("\nProud of you, you just won $1,000\nLet us play the next question now\n\n");
    } 
 
}else if (questionAnswer == 'B' || questionAnswer == 'C' || questionAnswer == 'D'){ //displays message to inform player of incorrect answer
    printf("\nOops - that was incorrect. You won $500 dollars. It was fun playing with you.\n\n");
 return 0;
}


//question 4


printf("Question 4: Here is the $5,000 question\n\nHow many brains does an octopus have?\nA. 9\nB. 2\nC. 1\nD. 16\n\n"); //displays fourth question
if (lifelineCounter == 0){
    printf("Would you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
    scanf(" %c", &lifelineAnswer);
    while (lifelineAnswer != 'Y' && lifelineAnswer != 'y' && lifelineAnswer != 'N' && lifelineAnswer != 'n'){ //repeatedly checks for correct input
    printf("\nWould you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
    scanf(" %c", &lifelineAnswer);
}
}
printf("\n");

if (lifelineCounter == 0){

if (lifelineAnswer == 'n' || lifelineAnswer == 'N'){ //this if-else checks if the player wants to use their lifeline and uses it if it is wanted
    printf("Enter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
        scanf(" %c", &questionAnswer);
    }
    } else if (lifelineAnswer == 'y' || lifelineAnswer == 'Y'){
    printf("OK - here are your 2 choices after using the 50-50 lifeline\n\nA. 9\nD. 16\n\n");
    printf("Reminder - You get only 1 lifeline - and you are using it now\n\n");
    printf("Enter your FINAL ANSWER ('A', 'D') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'D') here: ");
        scanf(" %c", &questionAnswer);
    }
    lifelineCounter = lifelineCounter + 1;
    } 
} else {
    printf("Enter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
    scanf(" %c", &questionAnswer);
}

if (questionAnswer == 'A'){ //displays congrats message if player selects correct answer

    srand (time(NULL));
    x=(rand()%5) + 1;

    if (x==1){
    printf("\nBravo, you just won $5,000\nLet us play the next question now\n\n");
    } else if (x==2){
    printf("\nCongrats, you just won $5,000\nLet us play the next question now\n\n");
    } else if (x==3){
    printf("\nWell done, you just won $5,000\nLet us play the next question now\n\n");
    } else if (x==4){
    printf("\nVery nice, you just won $5,000\nLet us play the next question now\n\n");
    } else if (x==5){
    printf("\nProud of you, you just won $5,000\nLet us play the next question now\n\n");
    } 

}else if (questionAnswer == 'B' || questionAnswer == 'C' || questionAnswer == 'D'){ //displays message to inform player of incorrect answer
    printf("\nOops - that was incorrect. You won $1,000 dollars. It was fun playing with you.\n\n");
 return 0;
}


//question 5


printf("Question 5: Here is the $10,000 question\n\nHow many bones does a shark have?\nA. 42\nB. 5\nC. 10\nD. 0\n\n"); //displays fifth question
if (lifelineCounter == 0){
    printf("Would you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
    scanf(" %c", &lifelineAnswer);
    while (lifelineAnswer != 'Y' && lifelineAnswer != 'y' && lifelineAnswer != 'N' && lifelineAnswer != 'n'){ //repeatedly checks for correct input
    printf("\nWould you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
    scanf(" %c", &lifelineAnswer);
}
}
printf("\n");

if (lifelineCounter == 0){

if (lifelineAnswer == 'n' || lifelineAnswer == 'N'){ //this if-else checks if the player wants to use their lifeline and uses it if it is wanted
    printf("Enter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
        scanf(" %c", &questionAnswer);
    }
    } else if (lifelineAnswer == 'y' || lifelineAnswer == 'Y'){
    printf("OK - here are your 2 choices after using the 50-50 lifeline\n\nA. 42\nD. 0\n\n");
    printf("Reminder - You get only 1 lifeline - and you are using it now\n\n");
    printf("Enter your FINAL ANSWER ('A', 'D') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'D') here: ");
        scanf(" %c", &questionAnswer);
    }
    lifelineCounter = lifelineCounter + 1;
    } 
} else {
    printf("Enter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
    scanf(" %c", &questionAnswer);
}

if (questionAnswer == 'D'){ //displays congrats message if player selects correct answer

    srand (time(NULL));
    x=(rand()%5) + 1;

    if (x==1){
    printf("\nBravo, you just won $10,000\nLet us play the next question now\n\n");
    } else if (x==2){
    printf("\nCongrats, you just won $10,000\nLet us play the next question now\n\n");
    } else if (x==3){
    printf("\nWell done, you just won $10,000\nLet us play the next question now\n\n");
    } else if (x==4){
    printf("\nVery nice, you just won $10,000\nLet us play the next question now\n\n");
    } else if (x==5){
    printf("\nProud of you, you just won $10,000\nLet us play the next question now\n\n");
    } 

}else if (questionAnswer == 'B' || questionAnswer == 'C' || questionAnswer == 'A'){ //displays message to inform player of incorrect answer
    printf("\nOops - that was incorrect. You won $5,000 dollars. It was fun playing with you.\n\n");
 return 0;
}


//question 6


printf("Question 6: Here is the $50,000 question\n\nWhat is the largest ocean on Earth?\nA. Pacific\nB. Atlantic\nC. Indian\nD. Arctic\n\n"); //displays sixth question
if (lifelineCounter == 0){
    printf("Would you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
    scanf(" %c", &lifelineAnswer);
    while (lifelineAnswer != 'Y' && lifelineAnswer != 'y' && lifelineAnswer != 'N' && lifelineAnswer != 'n'){ //repeatedly checks for correct input
    printf("\nWould you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
    scanf(" %c", &lifelineAnswer);
}
}
printf("\n");

if (lifelineCounter == 0){

if (lifelineAnswer == 'n' || lifelineAnswer == 'N'){ //this if-else checks if the player wants to use their lifeline and uses it if it is wanted
    printf("Enter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
        scanf(" %c", &questionAnswer);
    }
    } else if (lifelineAnswer == 'y' || lifelineAnswer == 'Y'){
    printf("OK - here are your 2 choices after using the 50-50 lifeline\n\nA. Pacific\nB. Atlantic\n\n");
    printf("Reminder - You get only 1 lifeline - and you are using it now\n\n");
    printf("Enter your FINAL ANSWER ('A', 'B') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'B') here: ");
        scanf(" %c", &questionAnswer);
    }
    lifelineCounter = lifelineCounter + 1;
    } 
} else {
    printf("Enter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
    scanf(" %c", &questionAnswer);
}

if (questionAnswer == 'A'){ //displays congrats message if player selects correct answer

    srand (time(NULL));
    x=(rand()%5) + 1;

    if (x==1){
    printf("\nBravo, you just won $50,000\nLet us play the next question now\n\n");
    } else if (x==2){
    printf("\nCongrats, you just won $50,000\nLet us play the next question now\n\n");
    } else if (x==3){
    printf("\nWell done, you just won $50,000\nLet us play the next question now\n\n");
    } else if (x==4){
    printf("\nVery nice, you just won $50,000\nLet us play the next question now\n\n");
    } else if (x==5){
    printf("\nProud of you, you just won $50,000\nLet us play the next question now\n\n");
    } 

}else if (questionAnswer == 'B' || questionAnswer == 'C' || questionAnswer == 'D'){ //displays message to inform player of incorrect answer
    printf("\nOops - that was incorrect. You won $10,000 dollars. It was fun playing with you.\n\n");
 return 0;
}


//question 7


printf("Question 7: Here is the $100,000 question\n\nWhat is the name of the largest fish in the sea?\nA. Blue whale\nB. Great white shark\nC. Hammerhead shark \nD. Whale shark\n\n"); //displays seventh question
if (lifelineCounter == 0){
    printf("Would you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
    scanf(" %c", &lifelineAnswer);
    while (lifelineAnswer != 'Y' && lifelineAnswer != 'y' && lifelineAnswer != 'N' && lifelineAnswer != 'n'){ //repeatedly checks for correct input
    printf("\nWould you like to use a lifeline (50-50)?\nEnter Y or y, N or n: ");
    scanf(" %c", &lifelineAnswer);
}
}
printf("\n");

if (lifelineCounter == 0){

if (lifelineAnswer == 'n' || lifelineAnswer == 'N'){ //this if-else checks if the player wants to use their lifeline and uses it if it is wanted
    printf("Enter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
        scanf(" %c", &questionAnswer);
    }
    } else if (lifelineAnswer == 'y' || lifelineAnswer == 'Y'){
    printf("OK - here are your 2 choices after using the 50-50 lifeline\n\nA. Blue whale\nD. Whale shark\n\n");
    printf("Reminder - You get only 1 lifeline - and you are using it now\n\n");
    printf("Enter your FINAL ANSWER ('A', 'D') here: ");
    scanf(" %c", &questionAnswer);
    while (questionAnswer != 'A' && questionAnswer != 'B' && questionAnswer != 'C' && questionAnswer != 'D'){ //repeatedly checks for correct input
        printf("\nEnter your FINAL ANSWER ('A', 'D') here: ");
        scanf(" %c", &questionAnswer);
    }
    lifelineCounter = lifelineCounter + 1;
    } 
} else {
    printf("Enter your FINAL ANSWER ('A', 'B', 'C', 'D') here: ");
    scanf(" %c", &questionAnswer);
}

if (questionAnswer == 'D'){ //displays congrats message if player selects correct answer

    srand (time(NULL));
    x=(rand()%5) + 1;

    if (x==1){
    printf("\nBravo, you just won $100,000\nIt was fun playing with you\n\n");
    } else if (x==2){
    printf("\nCongrats, you just won $100,000\nIt was fun playing with you\n\n");
    } else if (x==3){
    printf("\nWell done, you just won $100,000\nIt was fun playing with you\n\n");
    } else if (x==4){
    printf("\nVery nice, you just won $100,000\nIt was fun playing with you\n\n");
    } else if (x==5){
    printf("\nProud of you, you just won $100,000\nIt was fun playing with you\n\n");
    } 

}else if (questionAnswer == 'B' || questionAnswer == 'C' || questionAnswer == 'A'){ //displays message to inform player of incorrect answer
    printf("\nOops - that was incorrect. You won $50,000 dollars. It was fun playing with you.\n\n");
 return 0;
}

  return 0;
} 