#include<stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            if ((i == 0 && j > 1 && j < 6) ||      // S
                (i == 1 && (j == 0 || j == 6)) ||   // O
                (i == 2 && (j == 0 || j == 5)) ||   // V
                (i == 3 && (j == 0 || j == 6)) ||   // O
                (i == 4 && j > 1 && j < 6)) {       // N
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
