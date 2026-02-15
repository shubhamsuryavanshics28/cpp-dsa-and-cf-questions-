#include<bits/stdc++.h>
using namespace std;

bool anagrams(string a,string b){

    unordered_map<char,int> m;
    for(int i=0;i<a.length();++i){
        m[a[i]]++;
    }
    for(int i=0;i<b.length();++i){
        m[b[i]]++;
    }
    for(auto itr:m){
        if(itr.second!=2){
            return false;
        }
    }
    return true;

}

int main(){
    string a="";
    string b="";
    
    cout<<"enter sstring a: ";
    cin>>a;
    cout<<"enter string b: ";
    cin>>b;

    cout<<(anagrams(a,b)? "Anagrams" : "Not Anagrams");


    return 0;
}
