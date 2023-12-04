#include<iostream>
using namespace std;

int sumBetweenNumber();

int main() {
    sumBetweenNumber();
    return 0;
}

// this function
//      time complexity: O(n)
//      space complexity: O(1)
int sumBetweenNumber(){
    int a, b, sum = 0, i;
    cout << "Enter number a and b : ";
    cin >> a >> b;

    cout << "a = "<< a << endl << "b = " << b << endl;

    if (a > b){
        a = a + b;
        b = a - b;
        a = a - b;
    }

    for(int i = a; i<=b; i++){
        sum += i;
    }
    cout << "\nSum "<< a << " to " << b << " = " << sum << endl << endl;
    return 0;
}
