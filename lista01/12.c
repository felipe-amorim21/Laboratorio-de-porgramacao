#include <stdio.h>

int main(){
  float n1,n2;
  printf("Digite o 1º número: ");
  scanf("%f",&n1);
  printf("Digite o 2º número: ");
  scanf("%f",&n2);

  printf("A soma do dois números é de: %.2f\n",n1 + n2);
  printf("O produto dos dois números é de: %.2f\n",n1*n2);
  printf("A diferença dos dois números é de: %.2f\n",n1-n2);
  printf("O quociente dos dois números é de: %.2f\n",n1/n2);
  printf("O resto da divisão dos dois números é de: %d\n",(int)n1 % (int)n2);

  return 0;
}