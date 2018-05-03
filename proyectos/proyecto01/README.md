1133. Fibonacci Sequence
Time limit: 1.0 second
Memory limit: 64 MB
Problem illustration
is an infinite sequence of integers that satisfies to Fibonacci condition Fi + 2 = Fi + 1 + Fi for any integer i. Write a program, which calculates the value of Fn for the given values of Fi and Fj.
Input
The input contains five integers in the following order: i, Fi, j, Fj, n.
−1000 ≤ i, j, n ≤ 1000, i ≠ j,
−2·109 ≤ Fk ≤ 2·109 (k = min(i, j, n), …, max(i, j, n)).
Output
The output consists of a single integer, which is the value of Fn.
Sample
input	output
3 5 -1 4 5
12
Notes
In the example you are given: F3 = 5, F−1 = 4; you asked to find the value of F5. The following Fibonacci sequence can be reconstructed using known values:
…, F−1 = 4, F0 = −1, F1 = 3, F2 = 2, F3 = 5, F4 = 7, F5 = 12, …
Thus, the answer is: F5 = 12.
Problem Source: Quarterfinal, Central region of Russia, Rybinsk, October 17-18 2001
Tags: number theory  (hide tags for unsolved problems)
Difficulty: 185    Printable version    Submit solution    Discussion (76)
All submissions (23036)    All accepted submissions (3038)    Solutions rating (2238)


Contexto:
Para desarrollar este proyecto es necesario conocer de que se trata la secuencia fiboanacci, que dice que es una sucesion infinita de los números naturales en la que se inicia con el valor 0 y 1^2 y a partir de esos terminos ir sumando los dos números anteriores:
ejemplo:
0,1,1,2,3,5,8,13,21,34 ........
Como podemos observar se empieza con el valor de 0 y 1 como está definido y posterior mente  0+1 = 1 y este es el siguiente valor a la serie, 1+1=2, 2+1=3, 3+2=5 y así sucesivamente.

Para inicio del programa es necesario poder intorucir el valor por teclado (scanf()) hasta donde se quiera calcular la succeción de Fiboanacci. declarar los valore iniciales de temporal: int a=0, b=1;
esto para poder dar inicio a la sucección. posterior es hacer una variable que capture el valor del scanf y otro que haga la suma de los valores hasta el valor de scanf.

En el problema hay una parte que me queda duda que es la parte de los negativos, no estoy seguro pero creo que es necesario crear otro for para saber si es negativo, en caso de ser así afectaria el valor de la funcion aterior para poder realizar la suma con negativos.

esta parte es la que no he podido saber como hacerla hasta el momento