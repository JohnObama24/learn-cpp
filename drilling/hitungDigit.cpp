// Nama Program  : Hitung Digit
// Nama          : John Obama Morowali Sipahutar
// NPM           : 140810260083
// Tanggal       : 27 September 2026
// Deskripsi     : ini fungsi rekursif buat hitung jumlah digit dalam bilangan
// bulat positif, jadi kalau dibawah 10 maka digit lagsung 1, kalau lebih dari
// 10 maka digit ditambah 1 dan dihitung lagi dengan membagi 10
// waktu mengerjakan: 15 menit

#include <iostream>
using namespace std;

int hitungDigit(int n) {
  if (n < 10) {
    return 1;
  }
  return 1 + hitungDigit(n / 10);
}

void cetak(int n) {
  cout << "Jumlah digit " << n << " = " << hitungDigit(n) << endl;
}

int main() {
  int n;
  cout << "Masukkan bilangan: ";
  cin >> n;
  cetak(n);
  return 0;
}
