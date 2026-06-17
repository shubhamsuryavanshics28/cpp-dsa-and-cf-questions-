#include <iostream>
#include <pthread.h>
#include <unistd.h>
using namespace std;

pthread_mutex_t fork_mutex[5];

void* philosopher(void* num) {
    int i = *(int*)num;

    cout << "Philosopher " << i << " is thinking\n";
    sleep(1);

    pthread_mutex_lock(&fork_mutex[i]);
    cout << "Philosopher " << i << " picked left chopstick\n";

    pthread_mutex_lock(&fork_mutex[(i+1)%5]);
    cout << "Philosopher " << i << " picked right chopstick\n";

    cout << "Philosopher " << i << " is eating\n";
    sleep(1);

    pthread_mutex_unlock(&fork_mutex[i]);
    pthread_mutex_unlock(&fork_mutex[(i+1)%5]);

    cout << "Philosopher " << i << " finished eating\n";
    return NULL;
}

int main() {
    pthread_t ph[5];
    int id[5];

    for(int i=0;i<5;i++)
        pthread_mutex_init(&fork_mutex[i], NULL);

    for(int i=0;i<5;i++){
        id[i]=i;
        pthread_create(&ph[i], NULL, philosopher, &id[i]);
    }

    for(int i=0;i<5;i++)
        pthread_join(ph[i], NULL);

    return 0;
}