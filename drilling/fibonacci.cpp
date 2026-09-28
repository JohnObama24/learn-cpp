// Nama Program  : Fibonacci
// Nama          : John Obama Morowali Sipahutar
// NPM           : 140810260083
// Tanggal       : 27 September 2026
// Deskripsi     : jadi ini fungsi rekurisf buat hitung bilangan fibonacci, kan
// fibonacci itu bilangan yg dihitung dengan menambahkan 2 bilangan sebelumnya.
// waktu pengerjaan sekitar 15 menitan juga

#include <iostream>
using namespace std;


int fibonacci(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

void cetak(int n) {
  cout << "Fibonacci ke-" << n << " = " << fibonacci(n) << endl;
}

int main() {
  int n;
  cout << "Masukkan bilangan ke-n: ";
  cin >> n;
  cetak(n);
  return 0;
}
