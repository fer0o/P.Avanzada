65. Valid Number

Validate if a given string is numeric.

Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true

Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.

El punto de esta kata es saber si los strings son numéricos y lo primero a considerar es saber si el string contiene unicamente números, otra cosa que consideré es que no hubiera separación entre los caracteres del string , pero considerando el valor exponencial "e" y que lo tome como true me hace pensar que se tiene que considerar en una operación con esto me refiero a que no debe estar al inicio o al final del numero. 
Con respecto a los signos tiene que ser solamente uno y que este al principio del número, si no tiene que devolver false.

En caso de el uso de las literales tienen que tener un valor si no debe regresar por default un false.
Hay que tomar en cuenta muchos factores para que el programa pueda regresar un true o false como los signos, espacios, letras y por el momento se me ocurre realizar una serie de ifs anidados que validen cada uno de estos casos, aunque tal vez se pueda realizar con otro método como con case, o con switch. aunque por el momento no se como se implementan de una manera correcta en C.


 