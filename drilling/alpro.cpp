



#include <iostream>
using namespace std;

int main() {}

int faktorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * faktorial(n - 1);
}
// ini fungsi rekurisif buat hitungn n faktorial dimana mengahbiskan
// waktu pengerjaansekitar 10 menit

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}
// jadi ini fungsi rekurisf buat hitung bilangan fibonacci, kan fibonacci itu
// bilangan yg dihitung dengan menambahkan 2 bilangan sebelumnya.
// waktu pengerjaan sekitar 10 menitan juga


int hitungDigit(int n) {
  if (n < 10) {
    return 1;
  }

  return 1 + hitungDigit(n / 10);
}
// ini fungsi rekursif buat hitung jumlah digit dalam bilangan bulat positif,
// jadi kalau dibawah 10 maka digit lagsung 1, kalau lebih dari 10 maka digit
// ditambah 1 dan dihitung lagi dengan membagi 10
// waktu mengerjakan: 15 menit;

void hitungMundur(int n) {
  if (n == 0) {
    return;
  }
  cout << n << " ";
  hitungMundur(n - 1);
}
// ini fungsi rekursif buat hitung mundur dari bilangan bulat positif,
// jadi kalau n = 5 maka outputnya adalah 5 4 3 2 1
// waktu mengerjakan: 10 menitan kira kira


int jumlahAngka(int n) {
  if (n == 0) {
    return 0;
  }
  return n + jumlahAngka(n - 1);
}
// ini fungsi rekursif buat hitung jumlah angka dari 1 hingga n,
// jadi kalau n = 5 maka outputnya adalah 15
// waktu mengerjakan: lupa hitung, tapi kirang kira 10 - 15 menit
