// this program
//      time complexity: O(n*2)
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




void displayNode(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* margelist(Node* head1, Node* head2){
    if(head1 == NULL){
        return head2;
    }
    Node* temp1 = head1;
    Node* margeList = head1;
    Node* temp2 = head2;
    while(temp1->next != NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp2;
    return margeList;
}
void shortList(Node* head){
    Node* temp = head;
    while(temp != NULL){

        Node* temp2 = temp->next;
        while(temp2 != NULL){

            if(temp->data > temp2->data){
                int store = temp->data;
                temp->data = temp2->data;
                temp2->data = store;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    return;
}

int main() {

    Node* head1 = NULL;
    Node* head2 = NULL;
    int list1, list2;
    cout << "Enter your list 1 length: ";
    cin >> list1;
    cout << "Enter list data by space : ";
    for(int i =0; i<list1; i++){
        int d;
        cin >> d;
        createLeftNode(head1, d);
    }
    //list 2
    cout << "Enter your list 1 length: ";
    cin >> list2;
    cout << "Enter list data by space : ";
    for(int i =0; i<list2; i++){
        int d;
        cin >> d;
        createLeftNode(head2, d);
    }

    Node* newList = margelist(head1, head2);
    cout << endl << endl << "Shorted marged new List : " << endl;
    shortList(newList);
    displayNode(newList);


    // cout << head << endl;

    return 0;
}

