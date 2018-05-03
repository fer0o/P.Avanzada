#include <stdio.h> 
#include <pthread.h>
#define NUM_THREADS 20

void * helloWorld(void *p) {


int id = (int)p;
printf("hello world %d\n",id);
return NULL;

}

int main(){

    pthread_t threads [NUM_THREADS];
    int i;
    

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
    }
return 0;
}