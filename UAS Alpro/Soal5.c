#include <stdio.h>

void findCommonElements(int arrA[], int arrB[], int arrC[], int sizeA, int sizeB, int sizeC) {
    int i, j, k;
    int found = 0;

    for (i = 0; i < sizeA; i++) {
        for (j = 0; j < sizeB; j++) {
            for (k = 0; k < sizeC; k++) {
                if (arrA[i] == arrB[j] && arrB[j] == arrC[k]) {
                    printf("%d ", arrA[i]);
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("Tidak ada elemen yang sama.");
    }
}

int main() {
    int arrA[] = {1, 3, 4, 6, 7};
    int arrB[] = {2, 3, 5, 6,7};
    int arrC[] = {3, 6, 7, 8};

    int sizeA = sizeof(arrA) / sizeof(arrA[0]);
    int sizeB = sizeof(arrB) / sizeof(arrB[0]);
    int sizeC = sizeof(arrC) / sizeof(arrC[0]);

    printf("Elemen yang sama: ");
    findCommonElements(arrA, arrB, arrC, sizeA, sizeB, sizeC);
    printf("\n");
     printf("elemen yang sama akan dicetak apabila elemen tersebut ada pada ke-3 array tsb:)\n");
    return 0;
}