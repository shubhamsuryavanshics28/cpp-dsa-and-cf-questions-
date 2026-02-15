#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
class queue{
    int back;
    int front;
    vector<int> v;
public:
    queue(){
        this->back = -1;
        this->front = -1;
    }

    void enqueue(int data){
        v.push_back(data);
        this->back++;
        if(this->back == 0) this->front=0;
    }

    void dequeue(){
        if(this->front == this->back){
            this->back = -1;
            this->front = -1;
            v.clear();
        }else{
            this->front++;
        }
    }

    int getfront(){
        if(this->front == -1) return -1;
        else return this->v[this->front];
    }

    bool isempty(){
        return this->front == -1;
    }
};
int main(){
    queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.dequeue();
    qu.dequeue();
    qu.enqueue(60);
    qu.enqueue(70);
    qu.dequeue();
    

    while(not qu.isempty()){
        cout<<qu.getfront()<<" ";
        qu.dequeue();
    }

    return 0;
}
