#include<iostream>
#include<vector>

using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
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

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}

int search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<temp->data;
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

node* reserve(node* &head)
{
    node* pre = NULL;
    node* cur = head;
    node* nextptr;
    while(cur!=NULL){
        nextptr = cur->next;
        cur->next=pre;

        pre=cur;
        cur=nextptr;
    }
    return pre;
}
node* reserveRecursive(node* &head){
  if(head==NULL || head->next==NULL){
      return head;
  }
  node* newhead = reserveRecursive(head->next);
  head->next->next=head;
  head->next=NULL;
  return newhead;
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
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    node* newnode = reserveRecursive(head);
    display(newnode);
    return 0;
}