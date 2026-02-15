#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    queue<int> q;
    int burst[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Enter Burst Time of P" << i + 1 << ": ";
        cin >> burst[i];
        q.push(i); 
    }
    int waiting[n], turnaround[n];
    waiting[0] = 0;

    for (int i = 1; i < n; i++) {
        waiting[i] = waiting[i - 1] + burst[i - 1];
    }

    for (int i = 0; i < n; i++) {
        turnaround[i] = waiting[i] + burst[i];
    }

    cout << "\nProcess\tBurst\tWaiting\tTurnaround\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t"
             << burst[i] << "\t"
             << waiting[i] << "\t"
             << turnaround[i] << endl;
    }

    return 0;
}
