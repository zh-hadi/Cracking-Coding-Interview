#include<bits/stdc++.h>

using namespace std;

// this function
//    time complexity O(n)
//    space complexity O(1)

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); ++i) {
        int profit = prices[i] - prices[i - 1];
        maxProfit += max(0, profit);
    }

    return maxProfit;
}


int main() {
    //vector<int> prices = {7, 1, 5, 3, 6, 4};
    //vector<int> prices = {1, 2, 3, 4, 5};
    vector<int> prices = {7, 6, 4, 3, 1};
    int profit = maxProfit(prices);

    cout << "Maximum profit: " << profit << endl;

    return 0;
}
