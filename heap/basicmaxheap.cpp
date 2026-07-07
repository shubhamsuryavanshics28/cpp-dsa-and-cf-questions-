#include <bits/stdc++.h>
using namespace std;

int main(){
    // priority_queue<int> q;
    // q.push(10);
    // q.push(20);
    // q.push(50);
    // q.push(40);
    // cout<<q.top()<<endl;
    // q.pop();
    // cout<<q.top()<<endl;

    priority_queue< int, vector<int>, greater<int> > pq;
    pq.push(5);
    pq.push(10);
    pq.push(-4);
    pq.push(-1);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    return 0;
}