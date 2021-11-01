#include<iostream>
using namespace std;

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
    
    node* temp=head;
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    
    while(temp->next!=NULL){
        temp = temp->next;
    } 
    
    temp->next = n;
}

void display(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}

node* mergelinklist(node* l1,node* l2){
    if (l1->data>l2->data)
    {
        swap(l1, l2);
    }
    node* start=l1;
    while (l1!=NULL && l2!=NULL)
    {
        node* temp = NULL;
        while(l1!=NULL && l1->data<=l2->data){
            temp=l1;
            l1=l1->next;
        }
        temp->next=l2;
        swap(l1, l2);
    }
    return start;
}

int main(){
    node* h = NULL;
    node* l = NULL;
    insertAtTail(h, 1);
    insertAtTail(l, 2);
    insertAtTail(h, 3);
    insertAtTail(l, 4);
    insertAtTail(h, 5);
    insertAtTail(l, 6);
    node* r = mergelinklist(h,l);
    display(r);
    return 0;
}

