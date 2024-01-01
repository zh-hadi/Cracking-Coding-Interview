// this program
//      time complexity: O(n)
//      space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void createLeftNode(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;

}

Node* reverseList(Node* head){
    Node* pre = NULL;
    Node* current = head;
    Node* next = NULL;
    while(current != NULL){
        next = current->next;
        current->next = pre;
        pre = current;
        current = next;
    }
    return pre;
}


void displayNode(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    Node* head = NULL;
    cout << "Enter your list length: ";
    int n;
    cin >> n;
    cout << "Enter list data separate by space : ";
    for(int i =0; i<n; i++){
        int d;
        cin >> d;
        createLeftNode(head, d);
    }

    head = reverseList(head);

    cout << endl << "Reverse list : " << endl;
    displayNode(head);
    // cout << head << endl;

    return 0;
}

