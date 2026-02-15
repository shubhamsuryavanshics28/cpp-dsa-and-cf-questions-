#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
class stacks{
    int capacity;
    int* arr;
    int top;
    public:
    stacks(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }
    void push(int data){
        if(this->top == this->capacity-1){
            cout<<"stack overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }
    int pop(){
        if(this->top==-1){
            cout<<"stack underflow\n";
            return INT_MIN;
        }
        int popped = this->arr[this->top];
        this->top--;
        return popped;
    }
    int gettop(){
        if(this->top==-1){
            cout<<"underflow\n";
            return INT8_MIN;
        }
        return this->arr[this->top];
    }
    bool isempty(){
        return this->top == -1;
    }
    int size(){
        return this->top + 1;
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
