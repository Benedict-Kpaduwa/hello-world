#include <stdio.h>

int main() {
    int startSize;
    int totalSize;
    int years = 0;

    do {
        printf("Enter the start size (it should be greater than 9): ");
        scanf("%d", &startSize);

        if (startSize <= 9) {
            printf("Please enter a number greater than 9.\n");
        }
    } while (startSize <= 9);

    printf("Enter the target you want: ");
    scanf("%d", &totalSize);

    while (startSize < totalSize) {
        int birthRate = startSize / 3;
        int deathRate = startSize / 4;

        startSize = startSize + birthRate - deathRate;
        years++;
    }

    printf("It will take %d years to go from %d to %d llamas.\n", years, 20, 30);
    return 0;
}
