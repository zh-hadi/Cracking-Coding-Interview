#include <bits/stdc++.h>
#include <string>
using namespace std;

int palindrome_in_recursive(string word, int start, int ends);

int main() {

    string word;
    cin >> word;

    int len = word.size();

    int result = palindrome_in_recursive(word, 0, len-1);

    result ? cout << "true" << endl : cout << "false" << endl;



    return 0;
}
// this function
//      time complexity: O(n)
//      space complexity: O(n)
int palindrome_in_recursive(string word, int start, int ends) {
    if(start >= ends){
        return 1;
    }
    if(word[start] == word[ends]){
            //cout << word[start] << word[ends] << endl;
        return palindrome_in_recursive(word, start+1, ends-1);
    }else {
        return 0;
    }
}
