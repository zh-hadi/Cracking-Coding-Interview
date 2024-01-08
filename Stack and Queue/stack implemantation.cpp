// my own stack implementation

#include <iostream>
#include <string>
using namespace std;

class Stack{
    public:
    int data;
    Stack* previus;
};

Stack* add(Stack* &pre, int val){
    Stack* n = new Stack;
    n->data = val;
    n->previus = pre;
    return n;
}

Stack* del(Stack* &pre){
    return pre->previus;
}

int peek(Stack* pre) {
    return pre->data;        
}

int main()
{
    Stack* pre = NULL;
    pre =  add(pre, 34);
    cout << peek(pre) << endl;
    pre = add(pre, 50);
    cout << peek(pre) << endl;
    pre = del(pre);
  cout << pre->data;
}