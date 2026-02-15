#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_multimap<string,int> fruitcount;
    
    fruitcount.insert(make_pair("apple",5));
    fruitcount.insert(make_pair("mango",9));
    fruitcount.insert(make_pair("apple",4));

    for(auto pair:fruitcount){
        cout<<"fruit - "<<pair.first<<"\n";
        cout<<"count - "<<pair.second<<"\n";
    }

    return 0;
}
