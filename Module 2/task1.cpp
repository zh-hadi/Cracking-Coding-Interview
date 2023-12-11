#include <bits/stdc++.h>
using namespace std;

int targetValue();

int main() {

    targetValue();

    return 0;
}
// this function
//      time complexity: O(n*n)
//      space complexity: O(n)
int targetValue() {
    int n, target;
    cout << "Array lenght: ";
    cin >> n;

    int array[n];

    cout << "Array value spared by space: ";
    for(int i =0; i<n; i++){
        cin >> array[i];
    }

    cout << "Target Number = ";
    cin >> target;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(array[i] + array[j] == target){
                cout << endl << "Index: [ " << i << " , " << j <<" ]"<< endl;
                return 0;
            }
        }
    }
    cout << "Target number is not Here" << endl;
    return 0;
}
