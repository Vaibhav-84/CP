#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* bottom;
    node* next;
    node(int val){
        data = val;
        next=NULL;
        bottom=NULL;
    }
};


class linkList{
    public:
    node *head, *tail;
    linkList(int val){
        head = new node(val);
        tail=head;
    }

    void insertNode(int val, vector<int> bt){
        node* n = new node(val);
        tail->next=n;
        tail=tail->next;
        node* temp = tail;
        for(int num:bt)
        {
            temp->bottom = new node(num);
            temp=temp->bottom;
        }
    }

    void display(){
        node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data;
            node* temp2 = temp;
            while(temp2->bottom!=NULL){
                cout<<" bottom ->"<<temp2->bottom->data<<endl;
                temp2=temp2->bottom;
            }
            temp=temp->next;
            cout<<endl;
        }
        
    }
    

};


int main(){
    linkList obj(1);
    vector<int> v{2,3,4};
    obj.insertNode(8, v);
    obj.insertNode(7, v);
    obj.insertNode(6, v);
    obj.display();
    return 0;
}