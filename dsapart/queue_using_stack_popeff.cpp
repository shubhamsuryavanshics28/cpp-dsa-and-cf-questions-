#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

class queue{
    stack<int> st;
public:
    queue() {}

    void push(int x){
        stack<int> temp;
        while(not st.empty()){
            temp.push(st.top());
            st.pop();
        }
        st.push(x);
        while(not temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }

    void pop(){
        if(this->st.empty()) return;
        this->st.pop();
    }
    bool empty(){
        return this->st.empty();
    }

    int front(){
        if(this->st.empty()) return INT8_MIN;
        return this->st.top();
    }
};

int main(){
    queue qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.pop();
    while(not qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }

    return 0;
}
