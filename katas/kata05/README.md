Kata 5: Infografic
You want to build a word cloud, an infographic where the size of a word corresponds to how often it appears in the body of text.

To do this, you'll need data. Write code that takes a long string and builds its word cloud data in a hash table ↴ , where the keys are words and the values are the number of times the words occurred.

Think about capitalized words. For example, look at these sentences:

  "After beating the eggs, Dana read the next step:"

"Add milk and eggs, then add flour and sugar."

What do we want to do with "After", "Dana", and "add"? In this example, your final hash table should include one "Add" or "add" with a value of  2


Para esta kata es necesario tener la práctica que se hizo en clase de hash ya que la usaremos, en ella tenemos que generar una entrada y que lea los caracteres que reciba el string y llegue hasta que llegue al final del string. Se tendrá que almacenar con un pointer de char la secuenca de caracteres que sea diferente a un espacio hasta que en la cadena encuentre un espacio, cuando lo hace se agrega a un contador +1 en la tabla hash.






