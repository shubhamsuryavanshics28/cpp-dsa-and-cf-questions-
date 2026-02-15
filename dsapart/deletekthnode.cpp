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
void deletekthnode(Node* &head,int k){
    if(k<0 || head==NULL) return;
    Node* ptr1 = head;
    Node* ptr2 = head;
    while(k--){
        ptr2 = ptr2->next;
    }
    if(ptr2==NULL){
        Node* temp = head;
        head = head->next;
        free(temp);
        return;
    }
    while(ptr2->next!=NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    Node* temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
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
    deletekthnode(ll.head,3);
    ll.display(); 

    return 0;
}
