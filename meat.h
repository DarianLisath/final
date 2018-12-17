#ifndef MEAT_H_INCLUDED
#define MEAT_H_INCLUDED
#define MaxCharCount 30

void getHiddenWord(void);
char hiddedWord[MaxCharCount];
void giveHint(void);
char hint[MaxCharCount];

int guesses = 5;
int howManyGuesses = 1;



void getHiddenWord()
{
    FILE *pFile;
    pFile = fopen("hiddenword.txt", "r");

    fscanf(pFile, "%s", &hiddedWord);
    fclose(pFile);
}

void giveHint()
{
    FILE *pFile;
    char hint[50];

    pFile = fopen("HINT.txt", "r");
    printf("Hint: ");

    while(fgets(hint,50,pFile) != NULL)
    printf("%s", hint);
    printf("\n\n");
    fclose(pFile);
}
void showGuess()
{
    int a;
    printf("\nYour Guess: ");

    for (a = 0; a < MaxCharCount; a++)
        if (hiddedWord[a] == hint[a])
        printf("%c", hint[a]);
        else
        printf("?");
        printf("\n\n");
        howManyGuesses++;
}
int(isgameover);
{
    int(howManyGuesses() == 1 || < guesses);
    return 1;
    else
    return 0;
}
#endif // MEAT_H_INCLUDED
