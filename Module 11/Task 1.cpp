// this program
//    -> time complexity O(n!)
//    -> space complexity O(n^2)
#include<bits/stdc++.h>

using namespace std;

void search(vector<char> &A, vector<char> &perm, unordered_map<char, bool> &chosen, vector<vector<char>> &result){
    if(perm.size() == A.size()){
        result.push_back(perm);
        return;
    } else {
        for(int i = 0; i < A.size(); i++){
            if(chosen[A[i]]) continue;
            chosen[A[i]] = true;
            perm.push_back(A[i]);
            search(A, perm, chosen, result);
            chosen[A[i]] = false;
            perm.pop_back();
        }
    }
}

int main(){
    vector<char> perm;
    vector<vector<char>> result;
    unordered_map<char, bool> chosen;
    vector<char> A;

    cout << "input your data with out space ex(abc) : \n";
    string inputdata;
    cin >> inputdata;

    for(int i = 0; i < inputdata.size(); i++){
        A.push_back(inputdata[i]);
    }

    search(A, perm, chosen, result);

    cout << " [ ";
    int f = result.size();
    int count = 0;
    for(vector<char> x: result){
        count++;
        cout << "\"";
        for (char y: x){
            cout << y;
        }
        if(f-1 == count-1){
            cout << "\"";
        }else {
            cout << "\",";
        }


    }
    cout << " ]" << endl;

    return 0;
}
