// Nama Program  : Menghitung nilai
// Nama          : John Obama Morowali Sipahutar
// NPM           : 140810260083
// Tanggal       : 2 Oktober 2026
// Deskripsi     : Membuat sebuah implemntasi dari array 1 dimensi dengan menggunakan type data yang primitif
//
#include <iostream>
using namespace std;


void fungsiNilai(int jumlahMahasiswa) {

    float Mahasiswa[100];
    int Lulus = 0;
    int dibawahRata = 0;
    int nilaiTertinggi;
    int nilaiTerendah;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Masukkan nilai mahasiwa ke " << i + 1 << ":";
        cin >> Mahasiswa[i];
        if (Mahasiswa[i] >= 75) {
            Lulus++;
        } else
        {
            dibawahRata++;
            /* code */
        }




        if (i == 0) {
            nilaiTertinggi = Mahasiswa[i];
        } else if (Mahasiswa[i] > nilaiTertinggi) {
            nilaiTertinggi = Mahasiswa[i];
        }



        if ( i == 0) {
            nilaiTerendah = Mahasiswa[i];
        }  else if(Mahasiswa[i] < nilaiTerendah) {
            nilaiTerendah = Mahasiswa[i];
        }
    }

    float hasil = 0;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        hasil += Mahasiswa[i];
    }
    float rataRata = hasil / jumlahMahasiswa;


    cout << "Rata-rata: " << rataRata << endl;
    cout << "Mahasiswa lulus: " << Lulus << endl;
    cout << "Nilai Tertinggi: " << nilaiTertinggi << endl;
    cout << "Nilau Terendah: " << nilaiTerendah << endl;
};

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;
    fungsiNilai(jumlahMahasiswa);
}
