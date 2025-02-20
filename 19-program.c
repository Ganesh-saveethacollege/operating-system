#include <stdio.h>
#include <pthread.h>

pthread_mutex_t lock;
int shared = 0;

void *increment() {
    pthread_mutex_lock(&lock);
    shared++;
    printf("Shared: %d\n", shared);
    pthread_mutex_unlock(&lock);
}

int main() {
    pthread_t t1, t2;
    pthread_mutex_init(&lock, NULL);
    pthread_create(&t1, NULL, increment, NULL);
    pthread_create(&t2, NULL, increment, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
}
