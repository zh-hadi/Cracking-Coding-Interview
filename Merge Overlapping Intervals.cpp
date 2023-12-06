#include <bits/stdc++.h>
using namespace std;

int main() {
    /**
    * Write your C++ code from here
    */
    int n;
    cin >> n;
    int len = n * 2;
    int array[len] = {0};
    int l, r, result_length = 0,privius,  next;

    for(int i =0; i<n; i++){
        cin >> l >> r;
        if (i == 0) {
            privius = l;
            next = r;

            array[result_length] = privius;
            result_length++;
            array[result_length] = next;
            continue;
        }
        else if(next > l){
            array[result_length] = r;
            next = 0;
            privius = 0;
            continue;
        }
        privius = l;
        next = r;

        result_length++;
        array[result_length] = privius;
        result_length++;
        array[result_length] = next;

    }

    for (int i =0; i<=result_length; i++){
        if(i%2==0 && i != 0){
            cout << endl;
        }
        cout << array[i] << " " ;
    }
    int sor
    for(int i = 0; i<=result_length; i++){

    }

    return 0;
}
