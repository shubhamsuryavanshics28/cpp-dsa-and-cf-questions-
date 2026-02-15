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

void deleteduplicatenode(Node* &head){
    Node* curr_node = head;
    while(curr_node){
        while(curr_node->next && curr_node->val==curr_node->next->val){
            Node* temp = curr_node->next;
            curr_node->next = curr_node->next->next;
            free(temp);
        }
        curr_node = curr_node->next;
    }
}
Node* reversell(Node* head){
    Node* prevptr = NULL;
    Node* currptr = head;

    while(currptr!=NULL){
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }

    Node* new_head = prevptr;
    return new_head;
}
Node* reversellrecursive(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* new_node = reversellrecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return new_node;
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
    //ll.head = reversell(ll.head);
    //ll.display();
    ll.head = reversellrecursive(ll.head);
    ll.display();
    

    return 0;
}
