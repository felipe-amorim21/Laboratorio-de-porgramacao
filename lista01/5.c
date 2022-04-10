#include <stdio.h>

int main(){
  float a,a10;
  printf("Digite o valor da conta: ");
  scanf("%f",&a);
  a10 = a + (float)10/100 * a;
  printf("O valro a ser pago com os 10%% é de: %.2f\n",a10);

  return 0;
}