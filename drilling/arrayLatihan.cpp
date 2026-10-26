#include <iostream>
using namespace std;

int main() {


    //latihan selection sort dan bubble sort
    //
    //
    int arr[] = {5,2,1,4,7,8,3};

    int n = sizeof(arr) / sizeof(*arr);

//     for (int i = 0; i < n - 1; i++) {
//         int nilaiTerkecil = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[nilaiTerkecil]) {
//                 nilaiTerkecil = j;
//             }
//
//         }
//
//         swap(arr[i], arr[nilaiTerkecil]);
//
//         for (int k = 0; k < n; k++) {
//             cout << arr[k] << " ";
//         }
//         cout << endl;
//     }
//
//
//  bubble sort

for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j+1]);
        }
    }

    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
}

}
