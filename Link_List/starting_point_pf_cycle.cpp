#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next=NULL;
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


node* detect(node* head){
    if (head == NULL || head->next==NULL)
    {
        return NULL;
    }
    
    node* slow = head;
    node* fast = head;
    node* entery = head;
    node* temp = NULL;
    while (fast && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast == slow){
            temp=slow;
            break;
        }
    }
    if (temp!=NULL)
    {
        while (entery!=slow){
            entery=entery->next;
            slow=slow->next;
        }
        cout<<slow->data;
    }
    return NULL;
}

void createCycle(node* &head, int val){
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
    n->next=head->next->next;
}

int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 45);
    insertAtTail(head, 32);
    insertAtTail(head, 33);
    insertAtTail(head, 38);
    createCycle(head, 2);
    detect(head);
    return 0;
}