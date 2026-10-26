// Nama Program  : Hitng nilai
// Nama          : John Obama Morowali Sipahutar
// NPM           : 140810260083
// Tanggal       : 6 Oktober 2026
// Deskripsi     : program untuk menghitung nilai tertinggi, terendah, dan rata-rata dari mahasiswa


#include <iostream>
using namespace std;

// fungsi untuk mencari nilai maksimum
int max(float mahasiswa[], int N) {
  int maxIndex = 0;
  for (int i = 1; i < N; i++) {
    if (mahasiswa[i] > mahasiswa[maxIndex]) {
      maxIndex = i;
    }
  }
  return maxIndex;
}

// fungsi untuk mencari nilai minimum
int min(float mahasiswa[], int N) {
  int minIndex = 0;
  for (int i = 1; i < N; i++) {
    if (mahasiswa[i] < mahasiswa[minIndex]) {
      minIndex = i;
    }
  }
  return minIndex;
}

// fungsi untuk menghirung rata rata
int sum(float mahasiswa[], int N) {
  int total = 0;
  for (int i = 0; i < N; i++) {
    total += mahasiswa[i];
  }
  return total;
}

// fungsi untuk menampilkan output
void output(float nilaiTertinggi, float nilaiTerendah, float rataRata) {
  cout << "rata: rata: " << rataRata << endl;
  cout << "nilai tertinggi: " << nilaiTertinggi << endl;
  cout << "nilai terendah: " << nilaiTerendah << endl;
}

int main() {

// variabel buat simpan jumlah mahasiswa
  int jumlahMahasiswa;

  cout << "Masukkan jumlah mahasiswa" << endl;
  cin >> jumlahMahasiswa;

  // input nilai mahasiswa
  float mahasiswa[100];
  for (int i = 0; i < jumlahMahasiswa; i++) {
    cout << "Masukkan nilai ke" << i + 1 << ": ";
    cin >> mahasiswa[i];
  }

  // mencari nilai maksimum, minimum, dan total dgn menggunakan fungsi yg sudah dibuat diatas tadi
  int maxIndex = max(mahasiswa, jumlahMahasiswa);
  int minIndex = min(mahasiswa, jumlahMahasiswa);
  int total = sum(mahasiswa, jumlahMahasiswa);
  float rataRata = (float)total / jumlahMahasiswa;
  output(mahasiswa[maxIndex], mahasiswa[minIndex], rataRata);
}
