#include<bits/stdc++.h>
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


class LinkList{
    public:
    node *head, *tail;

    LinkList(int val){
        head = new node(val);
        tail=head;
    }
    void insertnode(int val){
        tail->next=new node(val);
        tail=tail->next;
    }

    void insertAtHead(int val){
        node* n = new node(val);
        n->next = head;
        head = n;
    }

    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }

};

int main(){
    LinkList obj(1);
    obj.insertnode(2);
    obj.insertnode(3);
    obj.insertnode(4);
    obj.insertAtHead(5);
    obj.display();

    return 0;
}