// Nama Program  : jadwal Kuliah
// Nama          : John Obama Morowali Sipahutar
// NPM           : 140810260083
// Tanggal       : 2 Oktober 2026
// Deskripsi     : Membuat sebuah implemntasi dari array 2 dimensi dengan menggunakan type data buatan untuk study case mata kuliah

#include <iostream>
#include <string>
using namespace std;

typedef string jadwalKuliah[3][2];

int main() {

  jadwalKuliah mataKuliah = {
      {"kalkulus", "Alprog"},
      {"PTKI", "Praktikum"},
      {"OKK", "Agama"},
  };
  jadwalKuliah jam = {
      {"08.00", "10.00"},
      {"08.00", "13.00"},
      {"09.00", "13.00"},
  };

  string Hari[3] = {"Senin", "Selasa", "Rabu"};

  for (int i = 0; i < 3; i++) {
    cout << "=====================" << endl;
    cout << "Jadwal hari: " << Hari[i] << endl;
    for (int j = 0; j < 2; j++) {

      cout << "Mata Kuliah: " << mataKuliah[i][j]<< endl;
      cout << "Jam: " << jam[i][j]<< endl;
    }
  }
}
