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

node* reverseKGroup(node* head, int k){
    if(head==NULL || k==1) return head;
    node* dummy = new node(0);
    dummy->next = head;
    node* cur = dummy;
    node* nex = dummy;
    node* pre = dummy;
    int count=0;

    while(cur->next != NULL){
        cur=cur->next;
        count++;
    }
    while(count >= k){
        cur=pre->next;
        nex=cur->next;
        for (int i = 0; i < k-1; i++)
        {
            cur->next = nex->next;
            nex->next=pre->next;
            pre->next=nex;
            nex=cur->next;
        }
        pre=cur;
        count-=k;
    }
    return dummy->next;
}

int main(){
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    display(head);
    node* result = reverseKGroup(head, 3);
    display(result);
    return 0;
}

