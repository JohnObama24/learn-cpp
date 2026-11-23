#include <iostream>
using namespace std;

int main()
{
    char a = 'A';
    double b = 1.2;
    short c = 10;
    int d = 20;

    char *pa = &a;
    double *pb = &b;
    short *pc = &c;
    int *pd = &d;

    cout << pa << endl; // output: Af∙ αd
    pa++;
    cout << pa << endl; // output: f∙ αd

    cout << pb << endl; // output: 0x64e0fff968
    pb++;
    cout << pb << endl; // output: 0x64e0fff970

    cout << pc << endl; // output: 0x64e0fff966
    pc++;
    cout << pc << endl; // output: 0x64e0fff968

    cout << pd << endl; // output: 0xe54c1ffbb8
    pd++;
    cout << pd << endl; // output: 0xe54c1ffbbc

    //hipotesis kenapa berbeda karena setiap tipe data memiliki ukuran memori yang berbeda
    //misalnya, char memiliki ukuran 1 byte, double memiliki ukuran 8 byte, short memiliki ukuran 2 byte, dan int memiliki ukuran 4 byte
    //sehingga, ketika pointer diincrement, alamat memori yang baru adalah alamat memori yang lama ditambah ukuran tipe data tersebut
    //misalnya, jika pd adalah alamat memori 0xe54c1ffbb8, maka pd++ akan menghasilkan alamat memori 0xe54c1ffbbc (0xe54c1ffbb8 + 4 byte)



    return 0;
}
