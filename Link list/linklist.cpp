#include<iostream>
using namespace std;


class node {
public:
    int data;
    node* next;
};

void insertNode(node* &head, int val){

    node* n = new node;
    n->data = val;
    n->next = NULL;

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertIntoIndex(node* &head, int pos, int val){
    node* n = new node;
    n->data = val;
    n->next = NULL;

    int current_pos = -1;
    node* temp = head;
    node* pre = NULL;
    while(temp!=NULL){
        current_pos++;
        if(current_pos == pos){
            n->next=temp;
            if(current_pos == 0){
                head = n;
                return;
            }
            pre->next= n;
            return;
        }
        pre = temp;
        temp = temp->next;
    }
    current_pos++;
    if(current_pos == pos){
        pre->next = n;
    }

}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

int main(){
    node* head = NULL;
    insertNode(head, 1);
    insertNode(head, 3);
    insertNode(head, 400);

    insertIntoIndex(head, 0, 5);
    insertIntoIndex(head, 2, 786);
    insertIntoIndex(head, 5, 786);

    //cout << head->data << endl << head->next->data << endl << head->next->next->data << endl;

    display(head);

    // add 1 index 45



    return 0;
}
