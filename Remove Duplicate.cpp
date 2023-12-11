
#include <bits/stdc++.h>
using namespace std;

int main() {
    /**
    * Write your C++ code from here
    */
    int n, new_len=0;
    cin >> n;
    int array[n];

    for(int i = 0; i<n; i++){
        cin >> array[i];
    }

    for(int i = 0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(array[i] == array[j]){
                array[j] = 0;
                new_len++;
            }
        }
    }
    int array2[new_len];
    for(int i = 0, j = 0; i<n; i++){
        if(array[i] == 0){
            continue;
        }
        array2[j] = array[i];
        j++;
    }

    for(int i = 0; i<new_len; i++){
        cout << array2[i];
    }

    return 0;
}
