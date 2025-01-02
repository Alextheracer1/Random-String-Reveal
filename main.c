/* ============================================================================
Name: main.c
Author: Alextheracer1
Version: 1.0
Description: Takes a string, randomizes it and then "solves" the string randomly.
============================================================================ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(void) {

    srand(time(NULL));

    int lower_bound = 32;
    int higher_bound = 126;

    char input[] = "Happy New Year!";
    int length = strlen(input);
    char random[length];
    int ran = 0;


    //fill array with random chars
    for (int i = 0; i < length; i++) {
        random[i] = rand() % (higher_bound - lower_bound + 1) + lower_bound;
    }

    while (1) {
        for (int i = 0; i < length; ++i) {
            ran = rand() % (higher_bound - lower_bound + 1) + lower_bound;
            if (ran == input[i]) {
                random[i] = input[i];
            }

            if (random[i] != input[i]) {
                random[i] = ran;
            }
            printf("%s\r", random);

        }

        for (int i = 0; i < length; i++) {
            if (strcmp(random, input) == 0) {
                return 0;
            }
        }
    }
}
