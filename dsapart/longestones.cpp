#include<iostream>
#include<vector>
#include<string>
using namespace std;

int longestones(string str1,int k){
    int start = 0;
    int end = 0;
    int zerocount = 0;
    int maxlength = 0;
    
    for(;end < str1.length();end++){
        if(str1[end]=='0'){
            zerocount++;
        }
        while(zerocount>k){
            if(str1[start]=='0') zerocount--;
            start++;
        }

        maxlength = max(maxlength,end-start+1);
    }
    return maxlength;
}
int main(){
    string str1;
    cout<<"enter your string: ";
    cin>>str1;

    int k;
    cout<<"enter max flips: ";
    cin>>k;

    cout<<longestones(str1,k)<<"\n";

    return 0;
}
