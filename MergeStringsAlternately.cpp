#include <iostream>
using namespace std;


string MergeStringsAlternately( string word1, string word2) {
    string result;
    
    int i = 0;
    while (i < word1.length() || i < word2.length()) {
        if (i < word1.length()){
            result += word1[i];
        }
        if (i < word2.length()){
            result += word2[i];
        }
        
        i++;
    }
    
    return result;
}


int main () {
   string word1 = "abc";
   string word2 = "pqr";

   cout << MergeStringsAlternately(word1, word2) << endl;

   return 0;

}