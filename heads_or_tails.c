#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void coinToss(int *heads, int *tails) {
    int result = rand() % 2;
    if (result == 0) {
        (*heads)++;
        printf("Heads\n");
    } else {
        (*tails)++;
        printf("Tails\n");
    }
}

int main() {
    int heads = 0, tails = 0;
    char name[50];

    printf("Who are you? ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    srand(time(0));

    printf("Tossing a coin...\n");
    for (int i = 1; i <= 3; i++) {
        printf("Round %d: ", i);
        coinToss(&heads, &tails);
    }

    printf("Heads: %d, Tails: %d\n", heads, tails);

    if (heads > tails) {
        printf("%s won!\n", name);
    } else {
        printf("%s lost!\n", name);
    }

    return 0;
}
