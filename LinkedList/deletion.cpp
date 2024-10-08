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

void del(Node* &head){
    Node* x = head;
    head=head->next;
    delete x;

}

void deletenode(Node* head,int n){
    Node* temp = head;
    while(temp->next->next !=NULL){
        temp=temp->next;
    } 
    Node* x = temp->next;
    temp->next = NULL;
    delete x;
}


// void deletenode(Node* head,int n){
//     Node* temp = head;
//     while(n>1){
//         temp=temp->next;
//         n--;
//     } 
//     Node* x = temp->next;
//     temp->next = x->next;

//     delete x;

//     // temp->next = NULL;
//     // delete x;
// }


int main(){
    Node *head = new Node(1);


    insertAtend(head,5);

    // deletenode(head,3);
    del(head);


    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }



    return 0;
}