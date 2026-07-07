#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};
int sizeoftree(Node* root){
    if(root==NULL) return 0;
    return 1 + sizeoftree(root->left) + sizeoftree(root->right);
}
bool levelorderqueue(Node* root){
    int size = sizeoftree(root);
    int count=0;
    queue<Node*> q;
    q.push(root);
    while(count<size){
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp!=NULL)q.push(temp->left);
        if(temp!=NULL)q.push(temp->right);
    }
    if(q.size()>0){
        Node* temp = q.front();
        if(temp!=NULL) return false;
        q.pop();
    }
    return true;
}
bool iscbt(Node* root){
    if(root==NULL) return true;

}
bool ismax(Node* root){
    if(root==NULL) return true;
    if(root->left!=NULL && root->val < root->left->val){
        return false;
    }
    if(root->right!=NULL && root->val < root->right->val){
        return false;
    }
    return ismax(root->left) && ismax(root->right);
}
int main(){
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = NULL;
    Node* g = new Node(6);
    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;

    cout<<ismax(a)<<endl;
    // if(iscbt(a) && ismax(a)) cout<<"Tree is a maxheap"<<endl;
    // else cout<<"Tree is not a maxheap"<<endl;
    

    return 0;
}