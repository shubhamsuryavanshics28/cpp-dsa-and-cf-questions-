#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>
#include<queue>
using namespace std;

class queue{
    int front;
    int back;
    vector<int> v;
    int cs;
    int ts;
public:
    queue(int n){
        v.resize(n);
        int ts = n;
        int cs = 0;
        int front = 0;
        int back = n-1;
    }

    void enqueue(int x){
        if(isfull()) return;
        this->back = (this->back + 1) % this->ts;
        this->v[this->back] = x;
    }

    void dequeue(){
        if(isempty()) return;
        this->front = (this->front + 1) % this->ts;
        this->cs--;
    }

    int getfront(){
        if(this->front == -1) return -1;
        return this->v[this->front];
    }

    bool isempty(){
        return this->front = -1;
    }

    bool isfull(){
        return this->cs == this->ts;
    }

};

int main(){
    


    return 0;
}
