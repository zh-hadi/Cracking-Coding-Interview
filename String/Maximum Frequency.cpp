#include <bits/stdc++.h>
#include <array>
using namespace std;

int main() {
    /**
    * Write your C++ code from here
    */
    char word[50000];
    cin >> word;

    //int result[26];
    array<int, 26>result;
    result.fill(0);


    for(int i = 0; word[i] != '\0'; i++){
        int w = (int)word[i] - 97;
        result[w]++;
    }
    int max = 0, index = 0;
    for(int i=0; i<26; i++){
        if(max < result[i]){
            max = result[i];
            index = i;
        }
    }
    char c;
    c = 97 + index;
    cout << c << " " << max;

    return 0;
}
