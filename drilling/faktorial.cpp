// Nama Program  : Faktorial
// Nama          : John Obama Morowali Sipahutar
// NPM           : 140810260083
// Tanggal       : 27 September 2026
// Deskripsi     : ini fungsi rekurisif buat hitungn n faktorial dimana
// mengahbiskan waktu pengerjaan sekitar 10 menit

#include <iostream>
using namespace std;

int faktorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * faktorial(n - 1);
}

void cetak(int n) {
  cout << n << "! = " << faktorial(n) << endl;
}

int main() {
  int n;
  cout << "Masukkan bilangan: ";
  cin >> n;
  cetak(n);
  return 0;
}
