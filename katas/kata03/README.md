Kata 3: 657. Judge Route Circle
Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L(Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:

Input: "UD"  Output: true  
Example 2:

Input: "LL"  Output: false 
 
 Lo primero que se me ocurrió para resolver este problema era saber cuantas veces había estado en esa posición, entonces pense en un contado ry como realmente solo se necesita saber 2 condiciones si U y D ó L y R eran iguales entoncesc on declarar 2 variables con su respectiva condición de aumento es suficiente para saber sie l robot esta haciendo un círculo 