#include <bits/stdc++.h>
using namespace std;

class definequeue{
public:
    int data;
    definequeue* next;
};

void push(definequeue* &ends, int data){
    definequeue* n = new definequeue;
    n->data = data;
    n->next = ends;
}

int main() {
    definequeue* start = NULL;
    definequeue* ends = NULL;

    push(ends, 30);
    cout << ends->data << endl;

    return 0;
}
