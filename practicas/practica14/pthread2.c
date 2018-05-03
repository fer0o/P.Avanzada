#include <stdio.h> 
#include <pthread.h>
#include <stdlib.h>
#define NUM_THREADS 20

void * helloWorld(void *p) {


int id = (long)p;
char *msg = (char *) malloc (25*sizeof(char));
sprintf(msg, "hello world %d\n",id);
//return NULL;
return (void *)msg;

}

int main(){

    pthread_t threads [NUM_THREADS];
    int i;
    char *msg;
    

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
            (void * )&msg);
            //NULL
            //&msg);

            printf("%s", msg);
            
    }
return 0;
}