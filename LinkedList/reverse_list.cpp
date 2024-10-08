#include<bits/stdc++.h>
using namespace std;

    struct Node{
        int data;
        Node *next;

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
    };

    Node* reverse(Node* head) {
        Node* prev = NULL;
        // ListNode* temp = head;

        while(head!=NULL){
            Node* x = head->next;
            head->next = prev;
            prev=head;
            head=x;
        }
        return prev;
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

int main(){
    Node *head = new Node(1);

    


    insertAtend(head,5);

    head = reverse(head);


    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }



    return 0;
}