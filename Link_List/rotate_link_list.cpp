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

node* rotateNode(node* &head, int k){
    if(!head || !head->next || k==0) return head;
    
    node* cur = head;
    int len = 1;
    while(cur->next && ++len){
        cur = cur->next;
    }

    cur->next = head;
    k = k%len;
    k = len-k;
    while(k--){
        cur = cur->next;
    }

    head = cur->next;
    cur->next = NULL;

    return head;
}


int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    node* result=rotateNode(head, 3);
    display(result);
    return 0;
} 