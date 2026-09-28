#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;

    cin >> s;

    string hasil = "";

    for (int i = 0; i < s.length(); i++) {
        if (i == 0 || s[i] != s[i - 1]) {
            hasil += s[i];
        }
    }
    cout << hasil << endl;
}
