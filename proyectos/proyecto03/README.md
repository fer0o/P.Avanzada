The Rise and Fall of Power

Johnny was asked by his math teacher to compute nn (n to the power of n, where n is an integer), and has to read his answer out loud. This is a bit of a tiring task, since the result is probably an extremely large number, and would certainly keep Johnny occupied for a while if he were to do it honestly. But Johnny knows that the teacher will certainly get bored when listening to his answer, and will sleep through most of it! So, Johnny feels he will get away with reading only the first k digits of the result before the teacher falls asleep, and then the last k digits when the teacher wakes up.

Write a program to help Johnny to compute the digits he will need to read out.

Input
The first line contains t, the number of test cases (about 30000). Then t test cases follow.

Each test case consists of one line containing two numbers n and k (1 ≤ n ≤ 109, 1 ≤ k ≤ 9). It is guaranteed that k is not more than the number of digits of nn.

Output
For each test case, print out one line containing two numbers, separated by a space, which are the first and the last k digits of nn.

Example
Input
2
4 2
9 3

Output
25 56
387 489




Análisis:
para este proyecto es necesario necesario saber que el número que vamos a calcular puede ser bastante grande y lo que se me ocurre para resolver este problema es primero obtener los datos de la operacion que vamos a realizar, en este caso el numero y el exponente al que queramos elevar, todo eso por medio de un scanner, obteniendo esos datos en necesario obtener el numero de digitos con los que vamos a impresionar al profesor.
para valuar en numero n*log10(n) para conocer el numero en cuanto se puede elevar dicho numero todo esto en log en base 10, luego es necesario calucular el exponente de K por pow(10, del valor) asi se esta elevando para que se pueda obtener el numero completo de los digitos que se necesita del numero que elevamos, y con eso imprimimos el numero de digitos con los que vamos a impresionar al profesor  K  = O( LogN ). calcular ( N pow N ) mod (pow (10 , K )), bueno eso es lo que puedo intuir del probema
