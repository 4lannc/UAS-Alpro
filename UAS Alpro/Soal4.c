#include <stdio.h>

int main() {
  int n;
  float data[100];
  float total = 0;

  // Membaca jumlah data
  printf("Masukkan jumlah data: ");
  scanf("%d", &n);

  // Membaca data
  for (int i = 0; i < n; i++) {
    printf("Masukkan data ke-%d: ", i + 1);
    scanf("%f", &data[i]);
    total += data[i];
  }

  // Menghitung rata-rata
  float rata = total / n;

  // Mencari nilai tengah
  float median;
  if (n % 2 == 0) {
    // Jika jumlah data genap
    median = (data[n / 2 - 1] + data[n / 2]) / 2;
  } else {
    // Jika jumlah data ganjil
    median = data[n / 2];
  }

  // Menampilkan hasil
  printf("Jumlah data: %d\n", n);
  printf("Rata-rata: %.2f\n", rata);
  printf("Nilai tengah: %.2f\n", median);

  return 0;
}
