#include <bits/stdc++.h>
using namespace std;

int main() {
    /**
    * Write your C++ code from here
    */
    int n;
    cin >> n;
    int array[n];

    for(int i =0; i<n; i++){
        cin >> array[i];
    }

    int min = array[0];
    int max = array[0];

    for(int i = 0; i<n; i++){
        if(min > array[i] && array[i] > -1){
            min =array[i];
        }else if(max < array[i]){
            max = array[i];
        }
    }

    if(max == 0){
        cout << max + 1;
        return 0;
    }

    int ar[max];
    for(int i = 0; i<=max;  i++){
        ar[i] = i;
    }

    for(int i = 0; i<n; i++){
        for(int j=0; j<max; j++) {
            if(array[i] == ar[j]){
                ar[j] = -1;
            }
        }
    }

    for(int i = 0; i<max; i++){
        // cout << ar[i] << " ";
        if(ar[i] >= 0 ){
            min = ar[i];
            cout << min;
            return 0;
        }else if(i == max -1){
            cout << max+1;
            return 0;
        }
    }
    return 0;
}
