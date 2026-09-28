// Nama Program  : Hitung Mundur
// Nama          : John Obama Morowali Sipahutar
// NPM           : 140810260083
// Tanggal       : 27 September 2026
// Deskripsi     : ini fungsi rekursif buat hitung mundur dari bilangan bulat
// positif, jadi kalau n = 5 maka outputnya adalah 5 4 3 2 1
// waktu mengerjakan: 10 menitan kira kira

#include <iostream>
using namespace std;

void hitungMundur(int n) {
  if (n == 0) {
    return;
  }
  cout << n << " ";
  hitungMundur(n - 1);
}

void cetak(int n) {
  cout << "Hitung mundur dari " << n << ": ";
  hitungMundur(n);
  cout << endl;
}

int main() {
  int n;
  cout << "Masukkan bilangan: ";
  cin >> n;
  cetak(n);
  return 0;
}
