#include<bits/stdc++.h>
using namespace std;

int main(){
    
    map<string,int> directory;

    directory["A"] = 3456;
    directory["C"] = 689404;
    directory["B"] = 453213;

    for(auto ele:directory){
        cout<<"name - "<<ele.first<<"\n";
        cout<<"phone no. - "<<ele.second<<"\n";
    }


    return 0;
}
