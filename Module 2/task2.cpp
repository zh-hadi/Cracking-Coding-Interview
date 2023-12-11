#include <bits/stdc++.h>
using namespace std;

int priceListProfit();

int main() {
    priceListProfit();

    return 0;
}

// this function
//      time complexity: O(n*n)
//      space complexity: O(n)
int priceListProfit() {
    int n;
    cout << "Price List Length : " ;
    cin >> n;
    int prices[n];
    cout << "Price list : ";
    for(int i = 0; i<n; i++){
        cin >> prices[i];
    }

    int profit=0, max_profit = 0;
    int sale_date, bye_date;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            profit = prices[j] - prices[i];
            if(max_profit < profit){
                max_profit = profit;
                sale_date = j+1;
                bye_date = i+1;
            }
        }
    }

    if(max_profit > 0){
        cout << endl << "Profit : " << max_profit << endl;
        cout << "For bye day " << bye_date << " stock sale day " << sale_date << endl;
    }else {
        cout << endl << "Profit : " << max_profit << endl;
    }
    return 0;
}
