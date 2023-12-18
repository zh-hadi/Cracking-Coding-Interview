#include <bits/stdc++.h>
using namespace std;

int main() {
    /**
    * Write your C++ code from here
    */
    char word[5000];
    cin >> word;

    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] >= 97 && word[i] <=122){
            int wordInt = 65 - (97 - (int)word[i]);
            cout << (char)wordInt ;
            //cout << word[65] + (97 - word[i]);
        }else {
            cout << word[i];
        }
    }

    return 0;
}
