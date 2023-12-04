#include<iostream>
using namespace std;

int nFactorial();

int main() {
   nFactorial();
}

// this function
//      time complexity: O(n)
//      space complexity: O(1)

int nFactorial() {
     int n = 0, result = 1;
    cout << "Enter factorial Number : ";
    cin >> n;

    if(n < 1 || n > 10){
        cout << "Please give your number 1 to 10\n\n";
        return nFactorial();
    }

    for ( int i = 1; i<=n; i++){
        result *= i;
    }
    cout << n << "! = " << result << endl << endl;

    return 0;
}
