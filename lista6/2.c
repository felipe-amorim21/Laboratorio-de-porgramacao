#include <stdio.h>
#include <stdlib.h>

struct estoque
{
  char *nomePeca;
  int numeroPeca;
  float precoPeca;
  int numeroPedido; 
};


int main() {
  struct estoque peca1;

  peca1.nomePeca = "Furadeira";
  peca1.numeroPeca = 36;
  peca1.precoPeca = 137.80;
  peca1.numeroPedido = 8371;


  return 0;
}