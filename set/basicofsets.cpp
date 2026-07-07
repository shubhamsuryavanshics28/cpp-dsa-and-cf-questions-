#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    for(int itr : s){
        cout<<itr<<" ";
    }
    cout<<"\n";
    cout<<s.size()<<"\n";
    if(s.find(6)!=s.end()){
        cout<<"exists";
    }else{
        cout<<"not exists"<<"\n";
    }

    return 0;
}