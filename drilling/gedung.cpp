// Nama Program  : suhu
// Nama          : John Obama Morowali Sipahutar
// NPM           : 140810260083
// Tanggal       : 6 Oktober 2026
// Deskripsi     : program untuk menghitung suhu di sebuag gedung 3 lantau dan tiap lantainya ada 4 ruangan


#include <iostream>
using namespace std;

// Fungsi untuk memasukkan suhu
void inputSuhu(float suhu[][4]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << "Masukkan suhu ruangan ke-" << j + 1 << " di lantai " << i + 1
           << ": ";

      cin >> suhu[i][j];
    }
  }
}

// Fungsi untuk menampilkan seluruh suhu
void outputSuhu(float suhu[][4]) {
  cout << "DATA SUHU RUANGAN" << endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << "Suhu ruangan ke-" << j + 1 << " di lantai " << i + 1 << ": "
           << suhu[i][j] << endl;
    }
  }
}

// Fungsi untuk menghitung rata-rata setiap lantai
void printRataSuhu(float suhu[][4]) {
  cout << "RATA-RATA SUHU" << endl;

  for (int i = 0; i < 3; i++) {
    float total = 0;

    for (int j = 0; j < 4; j++) {
      total += suhu[i][j];
    }

    cout << "Rata-rata suhu lantai " << i + 1 << ": " << total / 4 << " C"
         << endl;
  }
}

// Fungsi untuk mencari suhu tertinggi
void printSuhuMax(float suhu[][4]) {
  float max = suhu[0][0];

  int lantaiMax = 0;
  int ruanganMax = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (suhu[i][j] > max) {
        max = suhu[i][j];

        lantaiMax = i;
        ruanganMax = j;
      }
    }
  }

  cout << "SUHU TERTINGGwswwI" << endl;

  cout << "Suhu tertinggi: " << max << " C" << endl;

  cout << "Lokasi: Lantai " << lantaiMax + 1 << ", Ruangan " << ruanganMax + 1
       << endl;
}

int main() {

  float suhu[3][4];

  // Memasukkan data
  inputSuhu(suhu);

  // Menampilkan data
  outputSuhu(suhu);

  // Menghitung rata-rata
  printRataSuhu(suhu);

  // Mencari suhu tertinggi
  printSuhuMax(suhu);

  return 0;
}
