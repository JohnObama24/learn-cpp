#include <iostream>
using namespace std;

int main() {
    int N;
    int prima[100];

    cout << "Masukkan N: ";
    cin >> N;

    int angka = 2;
    int jumlah = 0;

    while (jumlah < N) {
        bool primaFlag = true;

        for (int i = 2; i < angka; i++) {
            if (angka % i == 0) {
                primaFlag = false;
                break;
            }
        }

        if (primaFlag) {
            prima[jumlah] = angka;
            jumlah++;
        }

        angka++;
    }

    cout << "Bilangan prima: ";

    for (int i = 0; i < N; i++) {
        cout << prima[i] << " ";
    }

    return 0;
}
