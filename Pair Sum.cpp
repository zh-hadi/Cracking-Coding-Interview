#include <bits/stdc++.h>
using namespace std;

int main() {
    /**
    * Write your C++ code from here
    */
    int n, s, seeing = 0;
    cin >> n >> s;

    int array[n];

    for(int i = 0; i<n; i++){
        cin >> array[i];
    }
    int worng_value[n];
    int worng_checker = 0;
    int pass = 0;

    for(int i = 0; i<n-1; i++){
        pass = 0;
        for(int w=0; w<worng_checker; w++){
            if(worng_value[w] == array[i]){
                pass = 1;
                continue;
            }
        }
        if(pass == 1){
            continue;
        }
        for(int j = i +1; j<n; j++){
            if( array[i] + array[j] == s){
                cout << "Yes";
                return 0;
            }
        }
        worng_value[worng_checker] = array[i];
        worng_checker++;
    }
    if( seeing == 0) {
        cout << "No";
    }

    return 0;
}
