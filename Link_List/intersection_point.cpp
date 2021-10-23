#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

node* intersection(node* l1, node* l2){
    cout<<"hello";
    if(l1 == NULL || l2 == NULL){
        return NULL;
    }
    node* d1 = l1;
    node* d2 = l1;
    while (l1!=l2)
    {   
        d1 = d1 == NULL ? l2 : d1->next;
        d2 = d2 == NULL ? l1 : d2->next;
    }
    return d1;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp =head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    node* l1 = NULL;
    node* l2 = NULL;
    node* test = new node(22);
    insertAtTail(l1, 1);
    insertAtTail(l1, 2);
    insertAtTail(l1, 3);
    insertAtTail(l1, 4);
    insertAtTail(l2, 14);
    l1=test;
    l2=test;
    insertAtTail(l2, 25);
    insertAtTail(l2, 32);
    insertAtTail(l2, 2);
    insertAtTail(l2, 3);
    insertAtTail(l2, 4);
    node* n = intersection(l1, l2);
    cout<<n->data;
}