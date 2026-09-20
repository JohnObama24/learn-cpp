#include <iostream>
using namespace std;

int main()
{
    int tanggal, bulan, tahun;

    cout << "Masukkan tanggal: " << endl;
    cin >> tanggal;
    cout << "Masukkan bulan: " << endl;
    cin >> bulan;
    cout << "Masukkan tahun: " << endl;
    cin >> tahun;

    long long totalHari = 0;

    for (int i = 0; i < tahun; i++)
    {
        /* code */
        if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
        {
            /* code */
            totalHari += 366;
        }
        else
        {
            totalHari += 365;
        }
    }

    int jumlahHariperBulan[] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (tahun % 400 == 0 || (tahun % 4 == 0 && tahun % 100 != 0))
    {
        /* code */
        jumlahHariperBulan[1] = 29;
    }

    for (int i = 0; i < bulan -1; i++) {
        totalHari += jumlahHariperBulan[i];
    }

    totalHari += tanggal;

    int hari = (totalHari - 1) % 7;

    string namaHari[] = {
        "senin", 
        "selasa", 
        "rabu", 
        "kamis", 
        "jumat", 
        "sabtu", 
        "minggu", 
    };
    

    cout << "Hari lahir = " << namaHari[hari] << endl;


    return 0;
}