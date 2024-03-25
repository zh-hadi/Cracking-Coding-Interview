#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// this function
//    time complexity   O(n*n)
//    space complexity  O(n)

int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, 1);


    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[i] > nums[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}


int main()
{
    //vector<int> ar = {10, 9, 2, 5, 3, 7, 101, 18};
    //vector<int> ar = {0, 1, 0, 3, 2, 3};
    //vector<int> ar = {7, 7, 7, 7, 7, 7, 7};
    vector<int> ar = {10, 22, 9, 33, 21, 50, 41, 60, 80};

    int result = lengthOfLIS(ar);
    cout << result;
    return 0;
}
