#include<bits/stdc++.h>
using namespace std;

struct Node {
  
    // Data part of the node
    int data;

    // Pointer to the next node in the list
    Node* next;

    // Constructor to initialize the node with data
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtend(Node * head,int n){

    Node * temp = head;
    int i=2;

    while(n--){
        Node* x = new Node(i++);
        temp->next=x;
        temp=temp->next;
    }


}
int size(Node* head){
    Node* temp = head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;  
        temp=temp->next;
    }
    return cnt;
}


Node* middle(Node* &head,int sz){
    Node* temp=head;
    sz=sz/2;
    int x=0;

    while(x<sz){
        temp=temp->next;
        x++;
    }

    return temp;
}

int main(){

    Node *head = new Node(1);

    insertAtend(head,4);

    int sz = size(head);



    Node* temp = middle(head,sz);

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


    return  0;
}