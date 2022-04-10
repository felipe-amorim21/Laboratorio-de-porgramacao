#include <stdio.h>

int main() {
  int x,n,total;
  printf("Digite um valor x: ");
  scanf("%d",&x);
  printf("Digite um valor n: ");
  scanf("%d",&n);
  total = x * 2;
  total = total << n;
  printf("(2 x %d) x 2^%d = %d\n",x,n,total);
  return 0;
}