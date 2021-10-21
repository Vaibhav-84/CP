#include<iostream>

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

node* mergefunction(node* l1, node* l2){
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;
    if(l1->data > l2->data){
        swap(l1, l2);
    }
    node* res = l1;
    while (l1!=NULL && l2!=NULL)
    {
        node* temp = NULL;
        while(l1!=NULL && l1->data <= l2->data){
            temp = l1;
            l1 = l1->next;
        }
        temp->next = l2;
        swap(l1, l2);
    }
    return res;
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
    insertAtTail(l1, 3);
    insertAtTail(l1, 4);
    insertAtTail(l1, 8);
    insertAtTail(l1, 10);
    insertAtTail(l2, 5);
    insertAtTail(l2, 7);
    insertAtTail(l2, 9);
    node* res = mergefunction(l1, l2);
    display(res);
    return 0;
}