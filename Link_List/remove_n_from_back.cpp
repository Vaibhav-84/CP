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

node* remove(node* head, int index){
    node* temp = new node(0);
    temp->next = head;
    node* fast = temp;
    node* slow = temp;
    int count=0;
    while(count!=index){
        fast=fast->next;
        count++;
    }
    while (fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;

    return temp->next;
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
    display(head);
    cout<<"asdesad"<<endl;
    node* newnode = remove(head, 3);
    display(newnode);
    return 0;
}