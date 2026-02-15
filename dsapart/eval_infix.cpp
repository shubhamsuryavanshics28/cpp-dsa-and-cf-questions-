#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<cmath>
using namespace std;

int calc(int v1,int v2,char op){
    if(op=='^'){
        return pow(v1,v2);
    }else if(op=='+'){
        return (v1+v2);
    }else if(op=='-'){
        return (v1-v2);
    }else if(op=='*'){
        return (v1*v2);
    }
    return (v1/v2);
}

int precedence(char ch){
    if(ch=='^') return 3;
    else if(ch=='*' || ch=='/') return 2;
    else if(ch=='+' || ch=='-') return 1;
    else return -1;
}

int eval(string &str){
    stack<int> nums;
    stack<int> ops;
    for(size_t i=0;i<str.size();i++){
        char c = str[i];
        if(isdigit(c)){
            nums.push(c-'0');
        }else if(c=='('){
            ops.push('(');
        }else if(c==')'){
            while(!ops.empty() && ops.top()!='('){
                char op = ops.top();
                ops.pop();

                int right = nums.top();
                nums.pop();
                int left = nums.top();
                nums.pop();
                nums.push(calc(left,right,op));
        
            }
            if(!ops.empty()) ops.pop();
        }else{
            if(c==' ') continue;
            while(!ops.empty() && ((precedence(ops.top()) > precedence(c)) || (precedence(ops.top()) == precedence(c) && c != '^'))){
                char op = ops.top();
                ops.pop();

                int right = nums.top();
                nums.pop();
                int left = nums.top();
                nums.pop();
                nums.push(calc(left,right,op));
        
            }
            ops.push(c);
        }
    }
    while(!ops.empty()){
        char op = ops.top();
        ops.pop();
                        
        int right = nums.top();
        nums.pop();
        int left = nums.top();
        nums.pop();
        nums.push(calc(left,right,op));
    }
    return nums.top();
}

int main(){
    string str = "1+(2*(3-1))+2";
    cout<<eval(str)<<"\n";

    return 0;
}
