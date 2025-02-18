#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Structure
struct wordLib
{
    char word[20];
    char hint[50];
} w[100];

//Global Variables
int wordCount = 0;

// Function Prototypes
void playGame();
void addWords();
void showWords();
void saveToFile();
void loadFromFile();
void drawHangman(int);
void printHeader();
void howToPlay();

// Main Function
int main()
{
    int choice;
    srand(time(0));
    loadFromFile();
    
    while(1)
    {
        printHeader();
        printf("\n\t 1. Play Game");
        printf("\n\t 2. Add New Words");
        printf("\n\t 3. Show All Words");
        printf("\n\t 4. How to Play");
        printf("\n\t 5. Exit");
        printf("\n\n\t Enter your choice (1-4): ");
        scanf("%d%*c", &choice);
        
        switch(choice)
        {
            case 1:
                playGame();
                break;
            case 2:
                addWords();
                break;
            case 3:
                showWords();
                break;
            case 4:
                howToPlay();
                break;
            case 5:
                printf("\n\t Thanks for playing!\n");
                return 0;
            default:
                printf("\n\t Invalid choice!\n\t Press Enter to continue...");
                getchar();
        }
    }
    return 0;
}
// Function Definations
void printHeader()
{
    system("clear");
    printf("\n\tHANGMAN GAME");
    printf("\n\t=============\n");
}

void playGame()
{
    char guessLetter,len;
    int randomIndex, i, tries = 0;
    int found, won = 0;
    char guessedLetters[26];
    int guessCount = 0;
    char word[20];
    char filler[20];
    
    if(wordCount == 0)
    {
        printf("\n\t No words available. Please add words first!");
        printf("\n\t Press Enter to continue...");
        getchar();
        return;
    }
    
    randomIndex = rand() % wordCount;
    strcpy(word, w[randomIndex].word);
    len = strlen(word);
    
    //Convert word to lowercase
    for(i = 0; i < len; i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] = word[i] + 32;
        }
    }

    for(i = 0; i < len; i++)
    {
        filler[i] = '_';
    }
    filler[len] = '\0';

    if(len<5)
    {
        filler[len-2]=word[len-2];
    }
    else if(len<8 && len>4)
    {
        filler[1]=word[1];
        filler[len-2]=word[len-2];
    }
    else
    {
        filler[1]=word[1];
        filler[len/2]=word[len/2];
        filler[len-2]=word[len-2];
    }

    while(tries < 7)
    {
        printHeader();
        
        drawHangman(tries);
        
        printf("\n\n\t Word: ");
        for(i = 0; i < len; i++)
        {
            printf("%c ", filler[i]);
        }
        
        printf("\n\t Hint: %s", w[randomIndex].hint);
        printf("\n\t Letters guessed: ");
        for(i = 0; i < guessCount; i++)
        {
            printf("%c ", guessedLetters[i]);
        }
        
        printf("\n\n\t Guesses left: %d", 7-tries);
        printf("\n\t Enter Guessed letter: ");
        scanf(" %c%*c", &guessLetter);

        if(guessLetter >= 'A' && guessLetter <= 'Z')
        {
            guessLetter = guessLetter + 32;
        }
        
        found = 0;
        for(i = 0; i < guessCount; i++)
        {
            if(guessLetter == guessedLetters[i])
            {
                printf("\n\t You already guessed this letter!");
                printf("\n\t Press Enter to continue...");
                getchar();
                found = 1;
                break;
            }
        }
        if(found) continue;
        
        guessedLetters[guessCount] = guessLetter;
        guessCount++;
        
        found = 0;
        for(i = 0; i < len; i++)
        {
            if(word[i] == guessLetter)
            {
                filler[i] = guessLetter;
                found = 1;
            }
        }
        if(!found)
        {
            tries++;
        }
        
        if(strcmp(word, filler) == 0)
        {
            won = 1;
            break;
        }
    }
    
    printHeader();
    drawHangman(tries);
    printf("\n\n\n\n\n\t************************");
    if(won)
    {
        printf("\n\n\n\n\n\tYou Guessed Right! Congratulations!");
    }
    else
    {
        printf("\n\n\n\n\n\t You Got Hanged! You Lose!");
    }
    printf("\n\n\n\n\n\t************************");
    printf("\n\n\t The word was: %s", word);
    printf("\n\n\t Press Enter to continue...");
    getchar();
}

void addWords()
{
    int n, i;
    printf("\n\t How many words to add? ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        printf("\n\t Enter word %d: ", i+1);
        scanf(" %s", w[wordCount].word);
        
        printf("\t Enter hint: ");
        scanf(" %s", w[wordCount].hint);
        
        wordCount++;
    }
    
    saveToFile();
    printf("\n\t Words added successfully!");
    printf("\n\t Press Enter to continue...");
    getchar();
}

void showWords()
{
    int i;
    if(wordCount == 0)
    {
        printf("\n\t No words in library!");
        printf("\n\t Press Enter to continue...");
        getchar();
        return;
    }
    
    printHeader();
    printf("\n\t WORD LIBRARY");
    printf("\n\t ============");
    for(i = 0; i < wordCount; i++)
    {
        printf("\n\t %d. Word: %s", i+1, w[i].word);
        printf("\n\t    Hint: %s", w[i].hint);
    }
    printf("\n\n\t Press Enter to continue...");
    getchar();
}

void saveToFile()
{
    FILE *fp;
    fp = fopen("words.dat", "wb");
    if(fp == NULL)
    {
        printf("\n\t Error opening file!");
        return;
    }
    fwrite(&wordCount, sizeof(int), 1, fp);
    fwrite(w, sizeof(struct wordLib), wordCount, fp);
    fclose(fp);
}

void loadFromFile()
{
    FILE *fp;
    fp = fopen("words.dat", "rb");
    if(fp == NULL)
    {
        wordCount = 0;
        return;
    }
    fread(&wordCount, sizeof(int), 1, fp);
    fread(w, sizeof(struct wordLib), wordCount, fp);
    fclose(fp);
}

void drawHangman(int tries)
{
    if(tries == 0)
    {
        printf("\n\t  +---+");
        printf("\n\t      |");
        printf("\n\t      |");
    }

    if (tries == 1)
    {
        printf("\n\t  +---+");
        printf("\n\t  |   |");
        printf("\n\t      |");

    }
    if (tries == 2)
    {
        printf("\n\t  +---+");
        printf("\n\t  |   |");
        printf("\n\t  O   |");
        printf("\n\t   ");
        printf("   |");
    }
    if (tries == 3)
    {
        printf("\n\t  +---+");
        printf("\n\t  |   |");
        printf("\n\t  O   |");
        printf("\n\t / ");
        printf("   |");
    }

    if (tries == 4)
    {
        printf("\n\t  +---+");
        printf("\n\t  |   |");
        printf("\n\t  O   |");
        printf("\n\t / ");
        printf("\\  |");
    }

    if (tries == 5)
    {
        printf("\n\t  +---+");
        printf("\n\t  |   |");
        printf("\n\t  O   |");
        printf("\n\t / ");
        printf("\\  |");
        printf("\n\t  |   |");

    }
    if (tries == 6)
    {   
        printf("\n\t  +---+");
        printf("\n\t  |   |");
        printf("\n\t  O   |");
        printf("\n\t / ");
        printf("\\  |");
        printf("\n\t  |   |");
        printf("\n\t / ");
    }
    if (tries == 7)
    {   
        printf("\n\t  +---+");
        printf("\n\t  |   |");
        printf("\n\t  O   |");
        printf("\n\t / ");
        printf("\\  |");
        printf("\n\t  |   |");
        printf("\n\t / ");
        printf("\\  |");
    }

    printf("\n\t      |");
    printf("\n\t      |");
    printf("\n\t============");
}

void howToPlay()
{
    printHeader();
    printf("\n\t HOW TO PLAY");
    printf("\n\t ============");
    printf("\n\n\t 1. The computer will choose a random word from the library.");
    printf("\n\t 2. You have to guess the word by entering one letter at a time.");
    printf("\n\t 3. You have 7 chances to guess the word.");
    printf("\n\t 4. If you guess the word within 7 chances, you win.");
    printf("\n\t 5. If you are unable to guess the word within 7 chances, you lose.");
    printf("\n");
    printf("\n\t -> You are given a hint for each word.");
    printf("\n\t -> You are even given filled hints in each word.");
    printf("\n\t -> The filled hints may even be repeated in the word.");
    printf("\n\n\t Press Enter to continue...");
    getchar();
}