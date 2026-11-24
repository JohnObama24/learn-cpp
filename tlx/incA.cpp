#include <iostream>
using namespace std;


int main() {
    int n;
    int nilai_terbesar = 0;
    int a[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i ] > nilai_terbesar) {
            nilai_terbesar = a[i];
        }

    }

    cout << nilai_terbesar << endl;

}