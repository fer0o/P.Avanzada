#include <stdio.h>
char  busqueda(int tiempoVuelo, int *listaPelis  ){
  int tiempoSobra;
  int x,y;
  int *tiempo;
  char totalVuelo;
  tiempo = listaPelis;
  totalVuelo = 0 ;

  for( x=0 ; x < sizeof(listaPelis)-1;x++)
  {
    tiempoSobra = *listaPelis - tiempoVuelo;
    for (y = x; y < sizeof(listaPelis); y++) {
        if( tiempoSobra == *tiempo)
        {
          totalVuelo = 1 ;
          break;
        }
        tiempo++;

    }
    listaPelis++;
    tiempo = listaPelis;
  }
  return totalVuelo;
}

int main(int lista, char const *arg[]) {
  /* code */

  int i;
  int listaPeliculas[1000];
  
  scanf("Tiempo total de vuelo:%d", &i);
  do{
    scanf("agregar tiempo de peliculas: %d", &listaPeliculas);
    listaPeliculas++;
  }
  while(i == tiempo);
  return 0;
}
