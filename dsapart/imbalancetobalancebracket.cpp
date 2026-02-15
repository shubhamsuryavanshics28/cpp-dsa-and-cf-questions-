#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

int isvalid(string str){
    int count=0;
    stack<char> st;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
            count++;
        }else{
            if(ch==')' and !st.empty() and st.top()=='('){
                st.pop();
                count--;
            }else if(ch=='}' and !st.empty() and st.top()=='{'){
                st.pop();
                count--;
            }else if(ch==']' and !st.empty() and st.top()=='['){
                st.pop();
                count--;
            }
        }
    }
    return count;
}

int main(){
    string str = "({[]})((";
    cout<<isvalid(str)<<"\n";

    return 0;
}
