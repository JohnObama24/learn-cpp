#include <iostream>
#include <numeric>;
using namespace std;

string gcdOfStrings(string str1, string str2)
{
    string result;

    if (str1 + str2 != str2 + str1)
    {
        return "";
        /* code */
    }
    
    int Gcd = gcd(str1.length(), str2.length());

    return str1.substr(0, Gcd);
}

int main()
{
    string str1 = "ABCABC";
    string str2 = "ABC";

    cout << gcdOfStrings(str1, str2) << endl;

    return 0;

}
