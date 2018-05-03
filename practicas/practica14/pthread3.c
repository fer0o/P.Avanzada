#include <stdio.h> 
#include <pthread.h>
#include <semaphore.h>

#define NUM_THREADS 20

int varglobal;
sem_t sema;

void * helloWorld(void *p) {


int id = (long)p;
printf("hello world = %d\n",id);
sem_wait(&sema);
varglobal += 100;
sem_post(&sema);
return NULL;

}

int main(){

    pthread_t threads [NUM_THREADS];
    int i;
    varglobal =0;
    //sem_init(&sema,0,1); 
    sema=0;


    for(i =0; i< NUM_THREADS; i++){
        pthread_create(
            &threads[i],
            NULL,
            helloWorld,

            //NULL
            (void *) i);
    }
    //si el hilo acaba todo lo demás se acaba si llega a 20 se muere
    for( i=0; i< NUM_THREADS; i++){
        pthread_join(
            threads[i],
            NULL);
            printf("varglobal = %d \n", varglobal);
    }
return 0;
}