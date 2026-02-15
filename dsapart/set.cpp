#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<set>
using namespace std;

int main(){
    // int n;
    // cout<<"enter the size of the array: ";
    // cin>>n;
    set<int> v;
    v.insert(1);
    v.insert(2);
    v.insert(3);
    v.insert(2);
    v.insert(5);
    v.insert(6);

    for(auto x:v){
        cout<<x<<" ";
    }


    return 0;
}
