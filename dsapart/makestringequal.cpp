#include<bits/stdc++.h>
using namespace std;

bool canmakeequal(vector<string> v){
    int n = v.size();
    unordered_map<char,int> m;
    for(auto str:v){
        for(char c:str){
            m[c]++;
        }
    }

    for(auto itr:m){
        if(itr.second%n!=0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cout<<"enter the string : ";
        cin>>v[i];
    }

    cout<<(canmakeequal(v)?"yes":"no");


    return 0;
}
