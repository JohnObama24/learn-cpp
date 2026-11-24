
#include <iostream>
using namespace std;

int main()
{

  int n;
  long long a[500000];

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = n - 1; i >= 0; i--)
  {
    cout << a[i] << '\n';
  }

  return 0;
}
