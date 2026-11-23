#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    vector<int> sisa;
    int a[1005]; 

    cin >> n >> x;
    bool terurut = true;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (i != x - 1) {
            sisa.push_back(a[i]);
        }
    }

    for (int i = 0; i < (int)sisa.size() - 1; i++)
    {
        if (sisa[i] > sisa[i + 1])
        {
            terurut = false;
            break;
        }
    }

    if (terurut)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}