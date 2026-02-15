#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "anagram";
    string t = "nagaram";
    std::sort(s.begin(), s.end());    
    std::sort(t.begin(),t.end());
    int n=0;
    bool flag = false;
    if(s.size()!=t.size()){
        cout<<"it is not an anagram\n";
    }else if(s.size()==t.size()){
        while(n<s.size()){
            if(s[s.size()-1]==t[s.size()-1]){
                flag = true;
                break;
            }
            else if(s[n]==t[n]){
                n++;
            }
        }
    }
    cout<<flag;
    return 0;
}
