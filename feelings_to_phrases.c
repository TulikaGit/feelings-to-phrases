C
#include <stdio.h>
#include <string.h>

int main() {
    char mood[20];

    printf("Enter your mood (happy, sad, stressed, excited): ");
    scanf("%s", mood);

    if (strcmp(mood, "happy") == 0) {
        printf("Quote: Keep smiling, because life is a beautiful thing!\n");
    } else if (strcmp(mood, "sad") == 0) {
        printf("Quote: Tough times never last, but tough people do.\n");
    } else if (strcmp(mood, "stressed") == 0) {
        printf("Quote: Relax. Breathe. You are stronger than you think.\n");
    } else if (strcmp(mood, "excited") == 0) {
        printf("Quote: The future belongs to those who believe in their dreams.\n");
    } else {
        printf("Quote: Every day is a new beginning. Stay positive!\n");
    }

    return 0;
}
