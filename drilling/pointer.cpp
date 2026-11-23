#include <iostream>
using namespace std;

int main()
{
    //jadi ini adalah
    int arr[] = {10, 20, 30};
    int *ptr = arr;

    // output: 10 karena ptr adalah alamat memori dari arr[0]
    cout << *ptr << endl;

    // output: 10 karena ptr adalah alamat memori dari arr[0]
    cout << *ptr++ << endl;
    // output: 20 karena ptr adalah alamat memori dari arr[1] setelah increment
    cout << *ptr << endl;

    // output: 20 karena ptr adalah alamat memori dari arr[1]
    cout << (*ptr)++ << endl;

    // output: 21 karena ptr adalah alamat memori dari arr[1]
    cout << *ptr << endl;

    // output: 22 karena ptr adalah alamat memori dari arr[2] setelah ditambah 1 dari nilai aslinya
    cout << ++*ptr << endl;

    // output: 22 karena ptr adalah alamat memori dari arr[2] setelah increment
    cout << *ptr << endl;

    return 0;
}
