#include<bits/stdc++.h>
using namespace std;


class node{
    public:
        int data;
        node *next, *random;
        node(int val){
            data=val;
            next=NULL;
            random=NULL;
        }
};

class LinkList{
    public:
    node *head, *tail;

    LinkList(int val){
        head = new node(val);
        tail=head;
    }

    void insertNode(int val){
        tail->next  = new node(val);
        tail=tail->next;
    }


    void display(node* res){
        node* temp = res;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

    void insertRandom(int val1, int val2){
        node* temp1 = head;
        node* temp2 = head;

        while(temp1->data!=val1){
            temp1=temp1->next;
        }
        while(temp2->data!=val2){
            temp2=temp2->next;
        }
        temp1->random = temp2;
    }

    void displayRandom(){
        node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->random;
        }
        cout<<"NULL";
    }


    node* clone(){
        node* temp = head;
        while (temp!=NULL){
            node* cl = new node(temp->data);
            cl->next=temp->next;
            temp->next = cl;
            temp=temp->next->next;
        }

        temp=head;
        while(temp!=NULL)
        {
            if (temp->random!=NULL)
            {
                temp->next->random=temp->random->next;
            }
            temp=temp->next->next;
        }

        node *dmp = NULL, *iter=head, *front=NULL, *clhead=iter->next;

        while (iter!=NULL)
        {
            front=iter->next->next;
                   
            dmp=iter->next;
            iter->next=front;

            iter=iter->next;
        }

 
        while (clhead!=NULL)
        {
            cout<<clhead->data<<"->";
            clhead=clhead->next;
        }
        cout<<"NULL"<<endl;
        temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";

    return clhead;
    }

};

int main(){
    LinkList obj(1);
    obj.insertNode(2);
    obj.insertNode(3);
    obj.insertNode(4);
    obj.insertRandom(1,4);
    obj.insertRandom(2,3);
    obj.insertRandom(4,2);
    obj.clone();
    return 0;   
}
