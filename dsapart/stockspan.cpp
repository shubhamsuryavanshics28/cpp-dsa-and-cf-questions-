#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

vector<int> nge(vector<int> &arr){
    int n = arr.size();
    reverse(arr.begin(),arr.end());
    vector<int> result(n,-1);
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[i] > arr[st.top()]){
            result[st.top()] = n-i-1;
            st.pop();
        }
        st.push(i);
    }
    reverse(result.begin(),result.end());
    reverse(arr.begin(),arr.end());
    return result;
}

int main(){
    int n;
    cout<<"enter the size of the array: "<<"\n";
    cin>>n;
    vector<int> vec;
    while(n--){
        int x;
        cout<<"enter the element\n";
        cin>>x;
        vec.push_back(x);
    }
    vector<int> res = nge(vec);
    for(int i=0;i<res.size();i++){
        cout<<(i-res[i])<<" ";
    }
    

    return 0;
}
