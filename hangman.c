#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

void displayWord(int wordLength, char word[], char guessed[]) {
        for (int i = 0; i < wordLength; i++) {
            if (strchr(guessed, word[i]) != NULL) {
                printf("%c", word[i]);
            } 
            else {
                printf("_");
            }
        }
    }


int main() {

    // seed for randomization
    srand(time(NULL));

    // words for player to guess
    char wordList[][20] = {
        "alabaster",
        "apple",
        "ballerina",
        "basketball",
        "concertina",
        "copper",
        "didgeridoo",
        "doctor",
        "eggplant",
        "elephant",
        "fountain",
        "furniture",
        "gander",
        "giggle",
        "hamburger",
        "holiday",
        "icecicle",
        "insurance",
        "jackal",
        "jelly",
        "kangaroo",
        "kite",
        "library",
        "lunch",
        "machine",
        "motorcycle",
        "noise",
        "notebook",
        "oyster",
        "operation",
        "penguin",
        "pineapple",
        "quilt",
        "queen",
        "racecar",
        "robot",
        "salamander",
        "saxophone",
        "tablecloth",
        "trombone",
        "umbrella",
        "underwear",
        "vanguard",
        "vibration",
        "walrus",
        "whimsy",
        "xylophone",
        "yacht",
        "zebra"
    };

    // length of word list
    int listLength = sizeof(wordList) / sizeof(wordList[0]);

    int randomIndex = rand() % listLength;
    
    
    // choose random word
    int wordLength = strlen(wordList[randomIndex]);
    char word[wordLength - 1];

    for (int i = 0; i <= wordLength; i++) {
        word[i] = wordList[randomIndex][i];
    }
    printf("%s\n", word);


    int numLives = 5;
    int numCorrect = 0;


    char g[] = {"abcd"};
    displayWord(wordLength, word, g);
    


    return 0;
}