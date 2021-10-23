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

node* addition(node* l1, node* l2){
    node* dum = new node(0);
    node* temp = dum;
    int carry=0;
    while(l1 != NULL || l2!=NULL || carry!=0){
        int sum=0;
        if (l1 != NULL)
        {
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2 != NULL)
        {
            sum += l2->data;
            l2 = l2->next;
        }
        sum += carry;
        carry = sum/10;
        node* n = new node(sum%10);
        temp->next=n;
        temp=temp->next;
    }
    return dum->next;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* l1=NULL;
    node* l2=NULL;
    insertAtTail(l1, 2);
    insertAtTail(l1, 4);
    insertAtTail(l1, 3);
    insertAtTail(l2, 5);
    insertAtTail(l2, 6);
    insertAtTail(l2, 7);
    insertAtTail(l2, 9);
    node* res = addition(l1, l2);
    display(res);
    return 0;
}