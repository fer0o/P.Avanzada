#include <stdio.h>

int main(){
    int a = 250;
    int j = 0,k = 0,l = 0;
    int *p;
    long int d = a * (long) a * a; //se necesita un long para que el resultado sea el esperado, sin long es un overflow
    float f = 4.67;
    int e = 4; //
    int c = (int)f + e;
    p =&a;
    *p =400;
    p++;
    *p = 5555;

    printf("a = &d, p = %p, j = %d, k = %d, l = %d \n ", a,p,j,k,l);
    
    //printf("a = %d, d = %ld, f = %f, e = %d, c =%d \n ", a, d, f, e, c);
    return 0;

}