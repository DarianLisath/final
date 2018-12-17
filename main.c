#include <stdio.h>
#include <stdlib.h>
#include "meat.h"
int main()
{
    {
    int userInput;
    do
    {
        printf("Choose an option: \n1. New Game\n2. Load Game\n3. More Options\n4. Quit\n\nYour Selection: ");
        scanf("%d", &userInput);

        switch(userInput)
        {
        case  1:
            printf("You chose New Game!\nCan you guess the secret word?\n\n\n");
            break;

        case 2:
            printf("You chose Load Game(PLACEHOLDER: please choose another option)!\n\n");
            break;

        case 3:
            printf("You chose More Options(PLACEHOLDER: please choose another option)!\n\n");
            break;

        case 4:
            printf("You chose Quit!\n\n");
            return 0;
        }
    }
    while (userInput !=1);
    getHiddenWord();
    giveHint();
    }
    //main game loop
    return 0;
}
