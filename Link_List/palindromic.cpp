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

node* reverseList(node* head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    node* cur=head;
    node* nex;
    node* pre=NULL;
    while(cur!=NULL){
        nex = cur->next;
        cur->next = pre;
        
        pre=cur;
        cur=nex;
    }
    return pre;
}


bool isPalindrome(node* head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    node* slow = head;
    node* fast = head;

    while(fast->next != NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    slow->next=reverseList(slow->next);
    slow=slow->next;

    while(slow!=NULL){
        if(head->data!=slow->data)
            return false;
        head=head->next;
        slow=slow->next;
    }
    return true;
}
 

int main(){
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 3);
    insertAtTail(head, 2);
    insertAtTail(head, 13);
    cout<<isPalindrome(head);
    return 0;
}