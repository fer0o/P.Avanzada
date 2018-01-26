#include <stdio.h>
#include "operations.h"

void printTestMessage(int, char *, char *);

int main()
{

    //funcion que suma 2 números pero requiere a fuerzas que regrese un int

    int a = 2147483647;
    int b = 6;

    int result = add(a, b);
    int expected = a + b;
    printTestMessage(result == expected,
                     "Addition test pased",
                     "Addition test failed");

    /*
    if(result == expected){
        printf("%s\n", "Addition test passed");
    }
    else{
        printf("%s\n", "Addition test failed");

        */

    //test susbtraction
    int d = 2147483647;
    int f = 6;
    int resultSubstracion = substraction (d, f);
    int expectedSubstracion = d - f;

    //int result = add(a,b);
    //int expected = a+b;

    /*if (resultSubstracion == substracion)
    {
        printf("%s\n", "substracction test passed");
    }
    else
    {
        printf("%s\n", "substraccion test failed");
    }*/
    printTestMessage(resultSubstracion == expectedSubstracion,
                     "substraction test pased",
                     "substraction test failed");
                     return 0;
}
