#include <bits/stdc++.h>
#include <string>
using namespace std;

//stack implementation
class Stack{
    public:
    char data;
    Stack* previus;
};

Stack* add(Stack* &pre, char val){
    Stack* n = new Stack;
    n->data = val;
    n->previus = pre;
    return n;
}

Stack* del(Stack* &pre){
    return pre->previus;
}

char peek(Stack* pre) {
    return pre->data;
}

int stackproblem2(string str);

int main()
{
    string str;
    cout << "Input : ";
    cin >> str;
    int result = stackproblem2(str);
}

// this function
//      time complexity: O(n)
//      space complexity: O(n)


int stackproblem2(string str){
    Stack* pre = NULL;
    for(int j= 0; j<str.size(); j++){
        char ch= str[j];
        if(pre == NULL){
            pre = add(pre, ch);
            continue;
        }else if(ch == peek(pre)){
            pre = del(pre);
            continue;
        }
        pre = add(pre, ch);
    }
    // reverse stack
    Stack* stk = NULL;
    while(pre != NULL){
        stk = add(stk, pre->data);
        pre = del(pre);
    }
    if(stk == NULL){
        cout << endl << "All character found duplicate" << endl;
        return 0;
    }
    cout << "output : ";
    while(stk != NULL){
        cout << stk->data;
        stk = del(stk);
    }
    cout << endl;
}

