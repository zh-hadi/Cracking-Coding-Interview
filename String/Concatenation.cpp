#include <bits/stdc++.h>
using namespace std;

int main() {
    /**
    * Write your C++ code from here
    */
    string a;
    string b;
    cin >> a >> b;

    int a_len = a.size();
    int b_len = b.size();

    int full_lenght = a_len + b_len;
    string c = b +a;

    for(int i = 0; i<full_lenght; i++){
        cout<< c[i];
    }

    return 0;
}
