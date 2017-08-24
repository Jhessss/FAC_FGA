#include<stdio.h>

int main( int argc, char *argv[ ])
{
  int cont;
    for(cont=0; cont < argc; cont++)
      printf("%d parametro: %s\n", cont, argv[cont]);
    getchar();

    return 0;
}
