#include<iostream>
using namespace std;

int main () {

int tanggal, bulan, tahun;

cin >> tanggal >> bulan >> tahun;

long long totalHari = 0;

for (int i = 0; i < tahun; i++)
{
    if (i % 400 == 0 || (i % 100 != 0 && i % 4 == 0))
    {
        totalHari += 366;
        /* code */
    } else
    {
        
        totalHari += 365; }
    /* code */
}

   int jumlahHariperBulan[] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (tahun % 400 == 0 || (tahun % 4 == 0 && tahun % 100 != 0))
    {
        /* code */
        jumlahHariperBulan[1] = 29;
    }

    for (int i = 0; i < bulan - 1; i++)
    {
        totalHari += jumlahHariperBulan[i];
        /* code */
    }

    
    
    






    return 0;
}