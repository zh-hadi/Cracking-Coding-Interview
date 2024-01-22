#include<iostream>
using namespace std;

int binarySearch(int ar[], int length, int target){
    int low, high, mid;
    low = 0;
    high = length - 1;

    while(low<=high){
        mid = low + (high - low) / 2;
        if(ar[mid] == target){
            return mid;
        }else if(ar[mid] < target){
            low = mid +1;
        }else {
            high = mid - 1;
        }
    }
    return -1;
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

    cout << endl << "Target value = ";
    int target;
    cin >> target;
    int result = binarySearch(ar, n, target);
    if(result != -1){
        cout << "Output: "<< result << endl;
    }else {
        cout << "Output: "<< result << endl;
    }
}
