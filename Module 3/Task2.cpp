
#include <bits/stdc++.h>
#include <string>
using namespace std;

int needle_heystack();

int main() {

    needle_heystack();

    return 0;
}
// this function
//      time complexity: O(n * m)
//      space complexity: O(n + m)
int needle_heystack() {
    string heystack;
    string needle;

    cin >> heystack >> needle;

    int n, m;
    n = heystack.size();
    m = needle.size();

    int i, j;
    for(i = 0; i<n; i++){
        for(j= 0; j<m && i + j < n; j++){
            if(heystack[i+j] != needle[j]){
                break;
            }
        }
        if(m == j){
            cout << endl <<  i << endl;
            return 0;
        }
    }
    cout << endl << -1 << endl;
    return 0;
}
