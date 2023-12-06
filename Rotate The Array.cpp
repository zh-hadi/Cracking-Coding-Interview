#include <bits/stdc++.h>
using namespace std;

int main() {
    /**
    * Write your C++ code from here
    */
    int n, k;
    cin >> n >> k;
    int array[n];

    for(int i = 0; i<n; i++){
        if(k==0){
            if(i == n-1){
                cin >> array[0];
                break;
            }
            cin >> array[i+1];
        }else {
            if(i == 0){
                cin >> array[n-1];
                continue;
            }
            cin >> array[i-1];
        }
    }

    for(int i=0; i<n; i++){
        cout << array[i] << " ";
    }



    return 0;
}
