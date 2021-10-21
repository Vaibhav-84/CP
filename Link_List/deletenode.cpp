#include<iostream>
using namespace std;

//Tortoise method

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }

    temp->next=n;
}

void deletenode(node* &dnode){
    dnode->data = dnode->next->data;
    dnode->next = dnode->next->next;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    // cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    deletenode(head->next->next->next);
    display(head);
    return 0;
}