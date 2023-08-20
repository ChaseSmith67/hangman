#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

int displayWord(int wordLength, char word[], char guessed[]) {
    int count = 0;
        for (int i = 0; i < wordLength; i++) {
            if (strchr(guessed, word[i]) != NULL) {
                printf("%c", word[i]);
                count++;
                if (count == wordLength) {
                    return 1;
                }
            } 
            else {
                printf("_");
            }
        }
        return 0;
    }

int guessLetter(char guessed[]) {
    char guess;
    printf("\nEnter a letter:" );
    scanf("%c", &guess);
    printf("\n");

    if (strchr(guessed, guess) == NULL) {
        for (int i = 0; i < 26; i++) {
            if (guessed[i] == 0) {
                guessed[i] = guess;
                return 1;
            }
        }
    }
    return 0;
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


    char g[26]; 
    for (int i = 0; i < 26; i++) {
        g[i] = 0;
    }

    while (guessLetter(g) == 1) { 

        if (displayWord(wordLength, word, g) == 1) {
            printf("\nYOU WIN!!\n");
        }
    }

    return 0;
}