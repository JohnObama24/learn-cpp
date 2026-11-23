#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 200; i++) {
        int *p = new int[250000];

        for (int j = 0; j < 250000; j++)
            p[j] = j;

        delete[] p;
        cout << "Iterasi " << i << " | alamat: " << p << endl;

    }

    cin.get();
    return 0;



    // tanpa delete, output alamat dari setiap iterasi berbeda beda, beda dengan alamat dari iterasi sebelumnya
    // dengan delete, output alamat dari setiap iterasi tetap sama, karena alamat yang digunakan kembali setelah delete
    //
    // dan setelah ditambah ke 200 iterasi, perbedaannya ketika aku membuka task manager adalah lebih efisien dengan delete,
    // karena alamat yang digunakan kembali setelah delete, sehingga tidak perlu mengalokasikan ulang memori untuk setiap iterasi
    // beda dengan tanoa delete, ukuran memori sedikit lebih besar sekitar 200 mb an
}
