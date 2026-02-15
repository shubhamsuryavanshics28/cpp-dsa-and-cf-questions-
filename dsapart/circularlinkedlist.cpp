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

class circularlinkedlist{
    Node* head;
public:
    circularlinkedlist(){
        head = NULL;
    }
    void display(){
        Node* temp = head;
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        do
        {
            cout<<temp->val<<"->";
            temp = temp->next;
        } while (temp!=head);
        cout<<endl;
        
    }
    void inseratstart(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            new_node->next = head;
            return;
        }
        Node* tail = head;
        while(tail->next!=head){
            tail = tail->next;
        }
        new_node->next = head;
        tail->next = new_node;
        head = new_node;
    }
    void insertatend(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            new_node->next = head;
            return;
        }
        Node* temp = head;
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = head;
        return;
    }
    void insertatkpos(int val, int k) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            new_node->next = head;
            return;
        }
        if (k == 0) {
            inseratstart(val);
            return;
        }
        Node* temp = head;
        int count = 0;
        while (count < k - 1 && temp->next != head) {
            temp = temp->next;
            count++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
    void deleteatstart(){
        Node* temp = head;
        
    }
};
int main(){
    circularlinkedlist cll;
    cll.inseratstart(1);
    cll.inseratstart(2);
    cll.inseratstart(3);
    cll.inseratstart(4);
    cll.inseratstart(5);
    cll.display();
    cll.insertatend(6);
    cll.display();
    cll.insertatkpos(4,3);
    cll.display();
    

    return 0;
}
