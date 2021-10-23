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




void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* middlenode(node* &head){
    node* slow = head;
    node* fast = head;
    while (fast->next != NULL && fast != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data;
    return slow;
    
}

int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 45);
    insertAtTail(head, 32);
    insertAtTail(head, 33);
    insertAtTail(head, 38);
    insertAtTail(head, 38);
    node* middle = middlenode(head);
    cout<<middle->data;
    return 0;
}