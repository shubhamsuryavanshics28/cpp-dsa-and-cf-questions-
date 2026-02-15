#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<int> burst(n);
    vector<int> pid(n);
    vector<int> waiting(n), turnaround(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter Burst Time of P" << i + 1 << ": ";
        cin >> burst[i];
        pid[i] = i + 1;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (burst[j] > burst[j + 1]) {
                swap(burst[j], burst[j + 1]);
                swap(pid[j], pid[j + 1]);
            }
        }
    }

    waiting[0] = 0;
    for (int i = 1; i < n; i++) {
        waiting[i] = waiting[i - 1] + burst[i - 1];
    }

    for (int i = 0; i < n; i++) {
        turnaround[i] = waiting[i] + burst[i];
    }

    cout << "\nProcess\tBurst\tWaiting\tTurnaround\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << pid[i] << "\t" << burst[i] << "\t" 
             << waiting[i] << "\t" << turnaround[i] << endl;
    }


    return 0;
}