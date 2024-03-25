#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// this function
//    time complexity   O(n*m)
//    space complexity  O(n*m)

int longestCommonSubsequence(string text1, string text2) {
    int m = text1.size();
    int n = text2.size();


    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));


    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (text1[i - 1] == text2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

int main()
{
    string text1, text2;
    //text1 = "abcde";
    //text2 = "ace";

    text1 = "ABCBDAB";
    text2 = "BDCAB";

    //text1 = "abc";
    //text2 = "abc";

    //text1 = "abc";
    //text2 = "def";

    int result = longestCommonSubsequence(text1, text2);
    cout << result;

    return 0;
}
