#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>
#include<cctype>
using namespace std;


int main(){
    string s = "3[a2[c]]";
    stack<string> st;  
    stack<int> opr;
    string result="";
    string ans = "";
    int k = 0;
    for(int i=0;i<s.length();i++){
            char ch = s[i];
            if(isdigit(static_cast<unsigned char>(ch))){
                k = (ch - '0');
            }else if(ch =='['){ 
                opr.push(k);
                st.push(ans);
                k=0;
                ans=""; 
            }else if(ch==']'){
                int a = 0;
                if(!opr.empty()){
                    a = opr.top();
                    opr.pop();
                }
                string pre = "";
                if(!st.empty()){
                    pre = st.top();
                    st.pop();
                }
                string curr="";
                for (int t = 0; t < a; t++) curr += ans;
                ans = pre + curr;
            }else{
                ans.push_back(ch);
            }
        }  
    result = ans;
    cout<<result<<"\n";
    
    return 0;
}
