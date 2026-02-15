#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

void insertatbottom(stack<int> &input,int x){
    if(input.empty()){
        input.push(x);
        return;
    }
    int curr = input.top();
    input.pop();
    insertatbottom(input,x);
    input.push(curr);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    insertatbottom(st,5);

    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<"\n";
    }
    
    return 0;
}
