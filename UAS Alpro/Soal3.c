#include <stdio.h>

// Fungsi untuk menukar dua elemen array
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partisi(int array[], int low, int high) {
  // Pilih pivot sebagai elemen terakhir
  int pivot = array[high];

  // Indeks elemen yang lebih kecil dari pivot
  int i = (low - 1);

  // Iterasi melalui elemen array
  for (int j = low; j < high; j++) {
    // Jika elemen lebih kecil dari pivot
    if (array[j] <= pivot) {
      // Tukar elemen dengan elemen yang lebih kecil
      i++;
      swap(&array[i], &array[j]);
    }
  }

  // Tukar pivot dengan elemen di posisi i
  swap(&array[i + 1], &array[high]);

  return (i + 1);
}

void quicksort(int array[], int low, int high) {
  if (low < high) {
    int pi = partisi(array, low, high);
    quicksort(array, low, pi - 1);
    quicksort(array, pi + 1, high);
  }
}

// Fungsi untuk mencetak array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  int n = sizeof(data) / sizeof(data[0]);

  printf("Array sebelum diurutkan: \n");
  printArray(data, n);

  quicksort(data, 0, n - 1);

  printf("Array setelah diurutkan: \n");
  printArray(data, n);
}
