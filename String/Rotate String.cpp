#include <bits/stdc++.h>
using namespace std;

int main() {
    /**
    * Write your C++ code from here
    */
    char word[5];
    cin >> word;

    char alfabet = word[0];
    // word[0] = word[4];
    // word[4] = alfabet;

    for(int i = 0; i<5-1; i++){
        word[i] = word[i+1];
    }
    word[4] = alfabet;

    for(int i=0; i<5; i++){
        cout << word[i];
    }

    return 0;
}
