#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

stack<int> insertatbottom(stack<int> input,int x){
    stack<int> temp;
    while(not input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    input.push(x);
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        input.push(curr);
    }
    return input;
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    stack<int> res = insertatbottom(st,5);

    while(not  res.empty()){
        int curr = res.top();
        res.pop();
        cout<<curr<<"\n";
    }
    return 0;
}
