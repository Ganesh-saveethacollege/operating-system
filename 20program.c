#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>

sem_t rw_mutex;
int data = 0;

void *reader() { sem_wait(&rw_mutex); printf("Read Data: %d\n", data); sem_post(&rw_mutex); }
void *writer() { sem_wait(&rw_mutex); data++; printf("Written Data: %d\n", data); sem_post(&rw_mutex); }

int main() {
    pthread_t r, w;
    sem_init(&rw_mutex, 0, 1);
    pthread_create(&w, NULL, writer, NULL);
    pthread_create(&r, NULL, reader, NULL);
    pthread_join(w, NULL);
    pthread_join(r, NULL);
}
