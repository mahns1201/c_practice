#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

{
    int num[10];
    int i, j, max, min;

    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++) num[i] = rand();

    printf("¹è¿­: ");
    for (i = 0; i < 10; i++) printf("%d ", num[i]);

    max = num[0];
    min = num[0];

    for (j = 0; j < 10; j++) {
        if (num[j] > max) {
            max = num[j];
        }
        if (num[j] < min) {
            min = num[j];
        }
    }

    printf("\nmax = %d\n", max); // max = 8
    printf("min = %d\n", min); // min = 1

    return 0;
}
