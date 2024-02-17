#include <stdio.h>

// Struktur data untuk menyimpan data mahasiswa
typedef struct {
  char nama[50];
  int nim;
  float nilai;
} Mahasiswa;

// Fungsi untuk mencari nilai mahasiswa dengan algoritma binary search
int binarySearch(Mahasiswa data[], int n, int nim) {
  int low = 0, high = n - 1, mid;
  while (low <= high) {
    mid = (low + high) / 2;
    if (data[mid].nim == nim) return mid;
    else if (data[mid].nim < nim) low = mid + 1;
    else high = mid - 1;
  }
  return -1;
}

int main() {
  int n;
  Mahasiswa data[100];

  // Membaca jumlah data
  scanf("%d", &n);

  // Membaca data mahasiswa
  for (int i = 0; i < n; i++) {
    scanf("%s %d %f", data[i].nama, &data[i].nim, &data[i].nilai);
  }

  // Mencari nilai mahasiswa
  int nim;
  scanf("%d", &nim);

  // Menjalankan binary search
  int pos = binarySearch(data, n, nim);

  // Menampilkan hasil pencarian
  if (pos == -1)
    printf("Mahasiswa dengan NIM %d tidak ditemukan.\n", nim);
  else
    printf("Mahasiswa dengan NIM %d ditemukan pada posisi %d.\nNama: %s\nNilai: %.2f\n", nim, pos + 1, data[pos].nama, data[pos].nilai);

  return 0;
}
