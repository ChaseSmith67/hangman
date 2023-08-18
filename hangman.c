#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main() {

    // seed for randomization
    srand(time(NULL));

    // words for player to guess
    char wordList[][20] = {
        "alabaster"
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
    
    printf("%s", wordList[randomIndex]);
    
    int wordLength = strlen(wordList[randomIndex]);

    printf("\n%d", wordLength);

    int numLives = 5;
    int numCorrect = 0;

    return 0;
}