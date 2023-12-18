#include <bits/stdc++.h>
#include <string>
using namespace std;

void shuffled_string();

int main() {

    shuffled_string();

    return 0;
}
// this function
//      time complexity: O(n)
//      space complexity: O(n)
void shuffled_string() {
    // read data line 15 to 24
    string word;
    cin >> word;

    int len = word.size();

    int indices[len];
    for(int i=0; i<len; i++){
        cin >> indices[i];
    }

    // process data start here
    string result;

    for(int i = 0; i<len; i++){
        result[i] = word[indices[i]];
    }

    cout << endl << endl;
    for(int i = 0; i<len; i++){
        cout << result[i];
    }
    cout << endl << endl;
}
