#include <bits/stdc++.h>
#include <string>
#include <array>
using namespace std;

int main() {
    /**
    * Write your C++ code from here
    */
    string a;
    string b;
    cin >> a >> b;

    if(a.size() != b.size()){
        cout << "NO";
        return 0;
    }

    int len = a.size();
    array<int, 26> result;
    result.fill(0);


    int c_word;
    for(int i = 0; i<len; i++){
       c_word = (int)a[i] - 97;
        result[c_word]++;
        c_word = (int)b[i] - 97;
        result[c_word]--;
    }

    // for(int i = 0; i<26; i++){
    //     cout <<result[i];
    // }


   bool yes = true;
    for(int i = 0; i<26; i++){
        if(result[i] != 0){
            cout << "NO";
            yes = false;
            break;
        }
    }
    if(yes){
        cout << "YES";
    }

    return 0;
}
