#include <stdio.h>

// Struktur data untuk menyimpan data mahasiswa
struct Mahasiswa {
  char nama[50];
  int nim;
  float nilai;
};

// Fungsi untuk mencari nilai mahasiswa dengan algoritma binary search
int binarySearch(struct Mahasiswa data[], int n, int nim) {
  int rendah = 0;
  int tinggi = n - 1;
  int mid;

  // Perulangan binary search
  while (rendah <= tinggi) {
    // Menghitung indeks tengah
    mid = (rendah + tinggi) / 2;

    // Membandingkan NIM dengan nilai tengah
    if (data[mid].nim == nim) {
      // NIM ditemukan
      return mid;
    } else if (data[mid].nim < nim) {
      // NIM yang dicari berada di kanan
      rendah = mid + 1;
    } else {
      // NIM yang dicari berada di kiri
      tinggi = mid - 1;
    }
  }

  return -1;
}

int main() {
  int n;
  struct Mahasiswa data[10];

  // Membaca jumlah data
  printf("Masukkan jumlah data: ");
  scanf("%d", &n);

  // Membaca data mahasiswa
  for (int i = 0; i < n; i++) {
    printf("Masukkan nama mahasiswa ke-%d: ", i + 1);
    scanf("%s", data[i].nama);

    printf("Masukkan NIM mahasiswa ke-%d: ", i + 1);
    scanf("%d", &data[i].nim);

    printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
    scanf("%f", &data[i].nilai);
  }

  // Mencari nilai mahasiswa
  int nim;
  printf("\nMasukkan NIM yang ingin dicari: ");
  scanf("%d", &nim);

  // Menjalankan binary search
  int pos = binarySearch(data, n, nim);

  // Menampilkan hasil pencarian
  if (pos == -1) {
    printf("Mahasiswa dengan NIM %d tidak ditemukan.\n", nim);
  } else {
    printf("Mahasiswa dengan NIM %d ditemukan pada posisi %d.\n", nim, pos + 1);
    printf("Nama: %s\n", data[pos].nama);
    printf("Nilai: %.2f\n", data[pos].nilai);
  }

  return 0;
}
