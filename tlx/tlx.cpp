#include <iostream>
using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    int a[100][100];

    // Memasukkan isi matriks
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> a[i][j];
        }
    }

    // Memutar matriks 90 derajat searah jarum jam
    for (int j = 0; j < M; j++) {
        for (int i = N - 1; i >= 0; i--) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
