// Nama Program  : Jumlah Angka
// Nama          : John Obama Morowali Sipahutar
// NPM           : 140810260083
// Tanggal       : 27 September 2026
// Deskripsi     : ini fungsi rekursif buat hitung jumlah angka dari 1 hingga
// n, jadi kalau n = 5 maka outputnya adalah 15
// waktu mengerjakan: lupa hitung, tapi kirang kira 10 - 15 menit

#include <iostream>
using namespace std;

int jumlahAngka(int n) {
  if (n == 0) {
    return 0;
  }
  return n + jumlahAngka(n - 1);
}

void cetak(int n) {
  cout << "Jumlah 1 hingga " << n << " = " << jumlahAngka(n) << endl;
}

int main() {
  int n;
  cout << "Masukkan bilangan: ";
  cin >> n;
  cetak(n);
  return 0;
}
