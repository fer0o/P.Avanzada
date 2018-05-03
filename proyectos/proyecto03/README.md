A 1-concave polygon is a simple polygon (its sides don't intersect or touch) which has at least 1 concave interior angle.

There are N points on a plane. Let S be the maximum area of a 1-concave polygon with vertices in those points. Compute 2S. Note that if there is no such (1-concave) polygon, you should print -1.

Input
The first line of the input contains an integer T - the number of test cases.
The first line of each test case contains N - the number of points.
Each of the following N lines contains two integers x and y - the coordinates of a point.
Output
If there's no 1-concave polygon, print -1. Otherwise, print one integer: twice the area of the largest one (it's guaranteed to be an integer under these constraints).

Constraints
1 ≤ T ≤ 100
3 ≤ N ≤ 105
No two points coincide (have identical both x and y coordinates).
No three points are collinear.
The sum of N over all test cases won't exceed 5·105.
|x|,|y| ≤ 109
Example
Input:
2
5
2 2
-2 -2
2 -2
-2 2
0 1
3
0 0
1 0
0 1

Output:
28
-1



razonamiento:
Al principio no entendía bien del problema y agarré este programa para proyecto por que se escuchaba gracioso, pero resultó ser mas complejo de lo que pensaba, cuando leí el proyecto me quedé muy confundido acerca de lo que el programa pedía y podía relacionarlo con las tablitas que pedían en la primaria con clavos y que con ligas encerraran ciertos clavos dentro de una figura geométrica.
En cierta parte no estaba tan equivocado, solamente que eso que consideraba de las ligas si tiene un fin. Buscando un poco más encontré lo relacionado a convex hall, que el realmente el algoritmo con el cual se resuelve este problema.
Leyendo de wikipedia descubrí que hay 3 métodos para poder resolver un convez hall. con esa información creo poder resolver el problema.

El problema a como le entiendo es de una serie de puntos en un plano encontrar los vectores poligonales que pueda encerrar todos los puntos.
primero que nada debo encontrar un punto pivote con el cual pueda empezar a dibujar el poligono que sera el punto inicial, despues de eso es necesario ordenar los vectores para poder encontrar el punto que cruza desde el punto inicial todo en sentido a las manecillas del reloj hasta lo que sería la siguiente arista del poligono, cuando se encuentre el siguiente punto es necesario aumentar el valor del primer vector para poder encontral el punto de la parte de arriba del poligono, así sucesivamente hasta tener el cuarto punto del poligono, cuando se encuentre en el el cuarto punto es necesario regresar a lo que fue el punto pivote de la figura.
Hay varios puntos a tomar en cuenta que son las restricciones del programa que ya vienen incluidas en el problema, luego tiene, puntos importantes que no habia considerado antes a la hora de leer el problema que es en que sentido va a tomar la linea que dibujará el poligono.
A papel creo que resolverlo es un poco ms sencillo viendo la explicación de wikipedia o de videos en youtube de como se resuelven, pero no pude programarlo.

El programa no lo pude resolver, estuve investigando mucho, pero no llegue a una conclusion del programa, intenté guiarme de programas que abordaran convex hall pero aun así no pude resolverlo.
