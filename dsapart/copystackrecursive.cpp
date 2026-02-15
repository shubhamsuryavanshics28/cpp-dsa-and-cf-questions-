#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

void copystack(stack<int> &input,stack<int> &result){
    if(input.empty()) return;
    int curr = input.top();
    input.pop();
    copystack(input,result);
    result.push(curr);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> result;
    copystack(st,result);

    while(not result.empty()){
        int curr = result.top();
        result.pop();
        cout<<curr<<"\n";
    }

    return 0;
}
