#include<bits/stdc++.h>

using namespace std;

// this program
//     time complexity O(n log m)
//     space complexity o(n + m)

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freqMap;
    for (int num : nums) {
        freqMap[num]++;
    }

    auto cmp = [](pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    };
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);


    for (auto& entry : freqMap) {
        pq.push(entry);
        if (pq.size() > k) {
            pq.pop();
        }
    }


    vector<int> result;
    while (!pq.empty()) {
        result.push_back(pq.top().first);
        pq.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}


int main() {
    // example 1
    //vector<int> nums = {1, 1, 1, 2, 2, 3};
    //int k = 2;

    // example 2
    vector<int> nums = {1};
    int k = 1;

    vector<int> result = topKFrequent(nums, k);

    for(auto x: result){
        cout << x << " ";
    }
    return 0;
}
