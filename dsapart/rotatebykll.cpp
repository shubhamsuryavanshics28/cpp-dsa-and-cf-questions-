#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class linkedlist{
public:
    Node* head;
    linkedlist(){
        head = NULL;
    }
    void insertattail(int value){
        Node* new_node = new Node(value);
        if(head==NULL){
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node; 
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<"\n";
    }
};
Node* rotatebykll(Node* &head,int k){
    if (!head || !head->next || k == 0) { 
            return head; 
        }
    int n=1;
    Node* tail = head;
    while(tail->next){
        n++;
        tail = tail->next;
    }
    n++;
    k = k%n;
    if(k==0){
        return head;
    }
    tail->next = head;
    Node* temp = head;
    for(int i=1;i<n-k;i++){
        temp = temp->next;
    }

    Node* newhead = temp->next;
    temp->next = NULL;
    return newhead;
}
int main(){
    linkedlist ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.insertattail(5);
    ll.insertattail(6);
    ll.display();
    ll.head = rotatebykll(ll.head,5);
    ll.display();

    return 0;
}
