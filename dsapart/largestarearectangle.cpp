#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;



int histogram(vector<int> &arr){
    int n = arr.size();
    stack<int> st;
    int ans=INT8_MIN;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[i] < arr[st.top()]){
            int el=arr[st.top()];
            st.pop();
            int nsi = i;
            int psi = (st.empty()) ? -1 : st.top();
            ans = max(ans,el*(nsi-psi-1));
        }
        st.push(i);
    }
    while(!st.empty()){
        int el = arr[st.top()];
        st.pop();
        int nsi = n;
        int psi = (st.empty()) ? -1 : st.top();
        ans = max(ans,el*(nsi-psi-1));
    }
    return ans;
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
    int res = histogram(vec);
    cout<<res;

    return 0;
}
