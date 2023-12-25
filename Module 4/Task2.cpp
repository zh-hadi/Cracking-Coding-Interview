
#include <bits/stdc++.h>
#include <string>
using namespace std;

int add_Number(int a, int b);

int main() {
    int a, b;
    cin >> a >> b;
    int result = add_Number(a, b);
    cout << result;

    return 0;
}
// this function
//      time complexity: O(n)
//      space complexity: O(n)
int add_Number(int a, int b){
    if(b==0){
        return 0;
    }
    return a + add_Number(a, b-1);
}
