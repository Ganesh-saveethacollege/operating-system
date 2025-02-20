#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>

sem_t empty, full;
int item = 0;

void *producer() { sem_wait(&empty); item++; printf("Produced: %d\n", item); sem_post(&full); }
void *consumer() { sem_wait(&full); printf("Consumed: %d\n", item); item--; sem_post(&empty); }

int main() {
    pthread_t p, c;
    sem_init(&empty, 0, 1);
    sem_init(&full, 0, 0);
    pthread_create(&p, NULL, producer, NULL);
    pthread_create(&c, NULL, consumer, NULL);
    pthread_join(p, NULL);
    pthread_join(c, NULL);
}
