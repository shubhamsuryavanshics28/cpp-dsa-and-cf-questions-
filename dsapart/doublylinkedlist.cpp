#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Node{
    public: 
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};
class doublylinkedlist{
    public:
    Node* head;
    Node* tail;

    doublylinkedlist(){
        head = NULL;
        tail = NULL;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp = temp->next;
        }cout<<endl;
    }
    void insertatstart(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev=new_node;
        head = new_node;
        return;
    }
    void insertatend(int val){
        Node* new_node = new Node(val);
        if(tail==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }
    void insertatkpos(int val,int k){
        Node* temp = head;
        int count = 1;
        while(count<=(k-1)){
            temp = temp->next;
            count++;
        }
        Node* new_node = new Node(val);
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        new_node->next->prev = new_node;
        return;
    }
    void deleteatstart(){
        Node* temp = head;
        if(head==NULL){
            temp = head->next;
            
        }
    }
};
int main(){
    doublylinkedlist dl;
    dl.insertatend(1);
    dl.insertatend(2);
    dl.insertatend(3);
    dl.insertatend(4);
    dl.display();
    dl.insertatkpos(5,2);
    dl.display();


    return 0;
}
