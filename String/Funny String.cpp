#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    /**
    * Write your C++ code from here
    */
    string word;
    cin >> word;

    bool status = true;

    for(int i = 0; i<word.size(); i++){
        if(i%2==1 && word[i] >= 65 && word[i] <= 90){
            status = true;
        }else if(i%2 == 0 && word[i] >= 97 && word[i] <= 122){
            status = true;
        }else {
            status = false;
            break;
        }
    }

    if(status){
        cout<< "Yes";
    }else {
        cout << "No";
    }

    return 0;
}
