#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    /**
    * Write your C++ code from here
    */
    string word;
    cin >> word;
    int len = word.size();
    bool p = false;
    for(int i = 0, j = len -1; i<len/2; i++, j--){
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        if(word[i] == word[j]){
            p = true;
        }else {
            cout << "NO" ;
            return 0;
        }
    }

    cout << "YES";


    return 0;
}
