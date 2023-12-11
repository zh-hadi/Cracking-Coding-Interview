#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    /**
    * Write your C++ code from here
    */
    int n, m;
    cin >> n >> m;
    int array1[n], array2[m];

    for(int i =0; i<n; i++){
        cin >> array1[i];
    }
    for(int i =0; i<m; i++){
        cin >> array2[i];
    }

    int count =0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(array1[i] == array2[j]){
                count++;
                array2[j] = 0;
                break;
            }
             if(m-1 == j){
                array1[i] = 0;
            }
        }

    }
    int result_array[count];
    int k = 0;
    cout << count << endl;
    for(int i =0; i<n; i++){
        if(array1[i] == 0){
            continue;
        }
        result_array[k] = array1[i];
        k++;
    }

    //cout << "k = " << k << "  count = " << count;
    int index = 0, min = 0;
    for(int i= 0; i<k; i++){
        index = i;
        min = result_array[i];
        for(int j = i+1; j<k; j++){
            if(min > result_array[j]){
                min = result_array[j];
                index = j;
            }
        }
        if(result_array[i] > min){
            result_array[index] = result_array[i];
            result_array[i] = min;
        }
    }

    cout << count << endl;
    for(int i = 0; i<count; i++){
        cout << result_array[i] << " ";
    }

    return 0;
}
