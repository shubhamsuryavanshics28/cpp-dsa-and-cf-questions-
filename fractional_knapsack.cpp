#include<bits/stdc++.h>
using namespace std;

typedef pair<double,pair<int,int>> pa;

double fractionalknapsack(vector<int> w, vector<int> p, int cp){
    vector<pa> v;

    for(int i=0;i<p.size();++i){
        double val = (double)p[i]/w[i];   
        pa pr;
        pr.second = {p[i], w[i]};
        pr.first = val;
        v.push_back(pr);
    }
    sort(v.begin(), v.end(), greater<>());
    int num = 0;
    double pro = 0;
    int i = 0;
    while(i<v.size() && num<cp){        
        pa pr = v[i];
        pair<int,int> p1 = pr.second;
        if(num + p1.second > cp){
            break;
        }
        num += p1.second;
        pro += p1.first;
        i++;
    }
    if(num != cp && i < v.size()){          
        pa pr = v[i];
        double diff = cp - num;
        int a = pr.second.first;
        int b = pr.second.second;
        double ans = ((double)a / b) * diff;   
        pro += ans;
    }
    return pro;
}

int main(){
    vector<int> weight = {20,18,28};
    vector<int> profit = {34,45,59};
    int capacity = 50;

    double result = fractionalknapsack(weight, profit, capacity);

    cout << result << endl;

    return 0;
}