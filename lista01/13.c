#include <stdio.h>

int main() {
  int a,b,c;
  printf("Digite um valor para A: ");
  scanf("%d",&a);
  printf("Digite um valor para B: ");
  scanf("%d",&b);
  c = a;
  a = b;
  b = c;
  
  printf("Após a troca A: %d e B: %d\n",a,b);
  
  return 0;
}