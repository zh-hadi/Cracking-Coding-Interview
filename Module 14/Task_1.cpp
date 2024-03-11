#include<bits/stdc++.h>

using namespace std;

// this function
//    time complexity O(n * m)// n = totalStep and m =  steps.size
//    space complexity O(n)

int wayToTop(int totalStep, const vector<int>& steps) {
    vector<int> count(totalStep + 1, 0);
    count[0] = 1;

    for (int x = 1; x <= totalStep; x++) {
        for (auto c : steps) {
            if (x - c >= 0) {
                count[x] += count[x - c];
            }
        }
    }

    return count[totalStep];
}

int main() {
    cout << "Enter Staircase steps: ";
    int totalSetps;
    cin >> totalSetps;

    // ways steps list
    vector<int> steps{1, 2};
    // find total ways
    int ways = wayToTop(totalSetps, steps);

    cout << "Ouput: " << ways << endl;
    return 0;
}
