#include<stdio.h>

int main( int argc, char *argv[ ])
{
  printf("# de parametros: %i\nNome do executavel: %s\n", argc -1, argv[0]);

  int cont;
    for(cont=1; cont < argc; cont++)
      printf("Parametro: #%i: %s\n", cont, argv[cont]);

    return 0;
}
