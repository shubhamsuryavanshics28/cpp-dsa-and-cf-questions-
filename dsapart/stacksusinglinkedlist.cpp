#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) : val(value), next(NULL) {}
};
class stacks{
    Node* head;
    int capacity;
    int currsize;
public:
    stacks(int c){
        this->capacity = c;
        this->currsize = 0;
        head = NULL;
    }
    bool isempty(){
        return this->head == NULL;
    }
    bool isfull(){
        return this->currsize == this->capacity;
    }
    void push(int data){
        if(this->currsize == this->capacity){
            cout<<"stack overflow\n";
            return;
        }
        Node* new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->currsize++;
    }
    int pop(){
        if(this->head==NULL){
            cout<<"underflow\n";
            return INT_MIN;
        }
        Node* new_node = this->head->next;
        this->head->next = NULL;
        Node* toberemoved = this->head;
        int result = toberemoved->val;
        delete toberemoved;
        this->head = new_node;
        this->currsize--;
        return result;
    }
    int gettop(){
        if(this->head == NULL){
            cout<<"underflow\n";
            return INT_MIN;
        }
        return this->head->val;
    }
    int size(){
        return this->currsize;
    }
}; 
int main(){
    stacks st(5); 
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.gettop()<<"\n";
    st.push(4);
    st.push(5);
    cout<<st.gettop()<<"\n";
    st.push(8);
    st.pop();
    cout<<st.gettop()<<"\n";

    return 0;
}
