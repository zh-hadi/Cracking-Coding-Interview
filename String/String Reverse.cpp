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

    for(int i = 0, j = len -1; i<len/2; i++, j--){
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }

    for(int i = 0; i<len; i++){
        cout << word[i];
    }


    return 0;
}
