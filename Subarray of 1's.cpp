#include <bits/stdc++.h>
using namespace std;

int main() {
    /**
    * Write your C++ code from here
    */
    int n, result = 0, counting = 0;
    cin >> n;
    int array[n];

    for(int i = 0; i<n; i++){
        cin >> array[i];
        if(array[i] == 1){
            counting++;
            if(i == n-1 && counting > result){
                result = counting;
            }
        }else {
            if(counting > result){
                result = counting;
            }
            counting = 0;
        }
    }
    cout << result;

    return 0;
}
