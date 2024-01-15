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

int valid_parentheses(string str);

int main()
{
    string str;
    cout << "Enter your parentheses : ";
    cin >> str;
    int result = valid_parentheses(str);
    cout<< endl << "Is valid : ";
    if(result){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
}

// this function
//      time complexity: O(n)
//      space complexity: O(n)


int valid_parentheses(string str){
    Stack* pre = NULL;
    for(int j= 0; j<str.size(); j++){
        char ch= str[j];
        // cout << ch << endl;
        //cout << "index " << j << " = " << op[j] << endl;
        if(pre == NULL){
            if(ch == ')' || ch == '}' || ch == ']'){
                pre = add(pre, ch);
                break;
            }
        }
        if(ch== '(' || ch == '{' || ch == '['){
            pre = add(pre, str[j]);
        }else if(ch == ')' && peek(pre) != '('){
            break;
        }else if(ch == '}' && peek(pre) != '{'){
            break;
        }else if(ch == ']' && peek(pre) != '['){
            break;
        }else {
            pre = del(pre);
        }

    }

    if(pre == NULL){
        return 1;
    }else{
        return 0;
    }
}
