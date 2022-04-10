#include <stdio.h>

int main(){
  int x;
  printf("Digite um número: ");
  scanf("%d",&x);
  x % 2 ? printf("ímpar\n") : printf("par\n");
  return 0;
}