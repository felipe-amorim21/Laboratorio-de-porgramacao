#include <stdio.h>
#include <math.h>

int main() {
  int x1,x2,y1,y2;
  double d;
  printf("Digite o valor da coordenda x1: ");
  scanf("%d",&x1);
  printf("Digite o valor da coordenda x1: ");
  scanf("%d",&x2);
  printf("Digite o valor da coordenda y1: ");
  scanf("%d",&y1);
  printf("Digite o valor da coordenda y1: ");
  scanf("%d",&y2);
  d = (double) pow(x2-x1,2) + pow(y2-y2,2);
  d = sqrt (d);
  printf("%lf",d);
  return 0;
}