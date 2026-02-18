#include <iostream>
using namespace std;

int main() {
    int n, tq;

    cout << "Enter number of processes: ";
    cin >> n;

    int burst[n], remaining[n], waiting[n], turnaround[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter burst time of process " << i + 1 << ": ";
        cin >> burst[i];
        remaining[i] = burst[i];
    }

    cout << "Enter time quantum: ";
    cin >> tq;

    int time = 0;
    bool done;

    while (true) {
        done = true;

        for (int i = 0; i < n; i++) {
            if (remaining[i] > 0) {
                done = false;
                if (remaining[i] > tq) {
                    time += tq;
                    remaining[i] -= tq;
                } else {
                    time += remaining[i];
                    waiting[i] = time - burst[i];
                    remaining[i] = 0;
                }
            }
        }
        
        if (done)
            break;
    }

    for (int i = 0; i < n; i++)
        turnaround[i] = burst[i] + waiting[i];

    float avg_wait = 0, avg_turn = 0;

    cout << "\nProcess\tBurst\tWaiting\tTurnaround\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t"
             << burst[i] << "\t"
             << waiting[i] << "\t"
             << turnaround[i] << endl;

        avg_wait += waiting[i];
        avg_turn += turnaround[i];
    }

    cout << "\nAverage Waiting Time = " << avg_wait / n;
    cout << "\nAverage Turnaround Time = " << avg_turn / n;

    return 0;
}
