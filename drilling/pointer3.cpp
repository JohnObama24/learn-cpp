#include <iostream>
using namespace std;

void arrayBiasa() {
  int b;
  cout << "Masukkan jumlah elemen: ";
  cin >> b;
  int arr[100];
  for (int i = 0; i < b; i++) {
    arr[i] = (i + 1);

    cout << *(arr + i) << " ";
  }
}

void arrayDinamis() {
  int n;
  cout << "Masukkan jumlah elemen: ";
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    arr[i] = (i + 1);

    cout << *(arr + i) << " ";
  }
  delete[] arr;
  arr = nullptr;
}

int main() {
  arrayBiasa();
  cout << endl;
  arrayDinamis();

  // mana yg lebih praktis dipakai: menurut saya array dinamis lebih praktis
  // dipakai jika kita baru tahu berapa banyak elemen yang akan dimasukkan
  // setelah program dijalankan, kita bisa mengalokasikan memori secara dinamis
  //
  // apa yg terjadi pada array biasa jika n = 150: karena kapasitas dari array
  // biasa cuma 100, maka elemen ke-101-150 akan out of bounds
  //
  // apa "harga" yg harus dibayar untuk memakai array dinamis: kita harus
  // mengalokasikan memori secara dinamis, sehingga memori yang digunakan akan
  // lebih besar daripada array biasa, serta kita harus bebaskan memori setelah
  // selesai menggunakan array dinamis karena memori yang dialokasikan secara
  // dinamis tidak akan dibebaskan secara otomatis.
  return 0;
}
