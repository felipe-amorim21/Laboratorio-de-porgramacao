#include <stdio.h>

int main() {
  float dolar,real;
  printf("Digite o valor da cotação do dólar: ");
  scanf("%f",&dolar);
  printf("Digite ovalor em reais a ser convertido: ");
  scanf("%f",&real);

  printf("O valor convertido em dólares é de: %.2f\n",real * dolar);
  
  return 0;
}