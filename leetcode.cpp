#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "abcd";
    string s2 = "cdab";
    char temp = s1[0];
    s1[0] = s1[2];
    s1[2] = temp;
    char temp2 = s1[1];
    s1[1] = s1[3];
    s1[3] = temp2;
    if(s1==s2) cout<<true;
    else cout<<false;
}