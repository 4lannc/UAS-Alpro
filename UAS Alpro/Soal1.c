#include <stdio.h>

void elemenTerbesar(int A[], int N) {
  int max1, max2, max3, i;

  max1 = A[0];
  max2 = A[0];
  max3 = A[0];

  for (i = 1; i < N; i++) {
    if (A[i] > max1) {
      max3 = max2;
      max2 = max1;
      max1 = A[i];
    } else if (A[i] > max2) {
      max3 = max2;
      max2 = A[i];
    } else if (A[i] > max3) {
      max3 = A[i];
    }
  }

  printf("3 Elemen Terbesar: %d, %d, %d\n", max1, max2, max3);
}

int main() {
  int A[] = {10, 4, 8, 18, 6, 1, 11, 5, 7, 3};
  int N = sizeof(A) / sizeof(A[0]);

  elemenTerbesar(A, N);

  return 0;
}
