#include<iostream>
using namespace std;

// time complexity O(log n)

int findMinArray(int ar[], int length){
    int low, high, mid;
    low = 0;
    high = length - 1;

    while(low<high){
        mid = low + (high - low) / 2;
        if(ar[mid] > ar[high]){
            low = mid +1;
        }else {
            high = mid;
        }
    }
    return ar[mid];
}

int main() {
    int n;
    cout << "Enter your array Length: ";
    cin >> n;
    cout << endl << "Enter array data separated by space : ";
    int ar[n];
    for(int i = 0; i<n; i++){
        cin >> ar[i];
    }


    cout << "Output : " << findMinArray(ar, n) << endl;
}

