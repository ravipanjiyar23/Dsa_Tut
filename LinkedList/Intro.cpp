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

void insert(Node* head,int k){
    Node* temp=head;

    while(k--){
        temp=temp->next;
    }

    Node * x = new Node(20);
    x->next=temp->next;
    temp->next=x;
}



void insertAtend(Node * head,int n){

    Node * temp = head;
    int i=2;

    while(n--){
        Node* x = new Node(i++);
        temp->next=x;
        temp=temp->next;
    }


}

void insertAtBegin(Node * &head){
    Node * y = new Node(10);

    y->next = head;
    head=y;

}


int main(){

    Node *head = new Node(1);

    // Node * second  = new Node(2);

    // head->next = second;
    // Node * third  = new Node(3);
    // Node * fourth  = new Node(4);
    // Node * fifth  = new Node(5);

    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;




    insertAtend(head,5);
    insertAtBegin(head);
    insert(head,0);
    cout<<head->data<<endl;

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


    return  0;
}