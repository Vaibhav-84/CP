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

void detectCycle(node* head){
    node* fast = head;
    node* slow = head;

    while(fast->next && fast->next->next){
        fast = fast->next->next;
        slow=slow->next;
        if(fast==slow){
            cout<<"cycle is there";
            return;
        }
    }
    cout<<"no cycle";
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
    n->next=head;
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
    node* head = NULL;
    // node* test = new node(22);
    // test->next = head;
    insertAtTail(head, 1);
    insertAtTail(head, 45);
    insertAtTail(head, 32);
    insertAtTail(head, 33);
    insertAtTail(head, 38);
    createCycle(head, 2);
    // head = test;
    detectCycle(head);
    return 0;
}