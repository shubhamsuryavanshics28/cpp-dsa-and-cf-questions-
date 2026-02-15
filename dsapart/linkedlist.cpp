#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
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
void insertatnode(Node* &head,int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;

}
void insertattail(Node* &head,int val){
    Node* new_node = new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertatposition(Node* &head,int val,int pos){
    if(pos==0){
        insertatnode(head,val);
        return;
    }

    Node* new_node = new Node(val);
    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos!=pos-1){
        temp = temp->next;
        curr_pos++;
    } 

    new_node->next = temp->next;
    temp->next = new_node;
}

void updateatpos(Node* &head,int k,int val){
    Node* temp = head;
    int currpos = 0;

    while(currpos!=k){
        temp = temp->next;
        currpos++;
    }
    temp->val = val;
}

void deleteatheaad(Node* &head){
    Node*temp = head;
    head = head->next;
    free(temp);
}

void deleteatend(Node* &head){
    Node* second_last = head;

    while(second_last->next->next!=NULL){
        second_last = second_last->next;
    }
    Node* temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}
void deleteatpos(Node* &head,int pos){
    if(pos==0){
        deleteatheaad(head);
        return;
    }
    int curr_pos=0;
    Node* prev = head;
    while(curr_pos!=pos-1){
        prev = prev->next;
        curr_pos++;
    }
    Node* temp = prev->next;
    prev->next = prev->next->next;
    free(temp);

}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}
int removearray(Node* &head,const vector<int>& nums){
    if(head==NULL) return 0;
    Node* curr = head;
    Node* prev = NULL;
    

}

int main(){
    Node* head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail (head, 5);
    display(head);
    vector<int> nums={1,2,3};
    removearray(head,nums);
    int a = removearray(head,nums);
    display(head);


    return 0;
}
