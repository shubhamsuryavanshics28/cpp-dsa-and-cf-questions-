#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

int isvalid(string str){
    stack<char> st;
    int count=0;
    int ans = 0;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }else{
            if(ch==')' and !st.empty() and st.top()=='('){
                st.pop();
                count+=2;
            }else if(ch=='}' and !st.empty() and st.top()=='{'){
                st.pop();
                count+=2;
            }else if(ch==']' and !st.empty() and st.top()=='['){
                st.pop();
                count+=2;
            }
        }
        ans = max(count,ans);
    }
    return count;
}

int main(){
    string str = "()(()";
    cout<<isvalid(str)<<"\n";

    return 0;
}
