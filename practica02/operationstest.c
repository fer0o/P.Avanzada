#include<stdio.h>

int main(){

//funcion que suma 2 números

    int a = 4;
    int b = 6;

    int result = add(a,b);
    int expected = a+b;

    if(result == expected){
        printf("%s\n", "Addition test passed");
    }
    else{
        printf("%s\n", "Addition test failed");
    }




return 0;

}