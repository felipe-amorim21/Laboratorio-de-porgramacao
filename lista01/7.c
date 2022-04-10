#include <stdio.h>

int main() {
  int horas,minutos,segundos,minToSec,hourToSec;
  printf("Digite o total de horas: ");
  scanf("%d",&horas);
  printf("Digite o total de minutos: ");
  scanf("%d",&minutos);
  printf("Digite o total de segundos: ");
  scanf("%d",&segundos);
  minToSec = minutos * 60;
  hourToSec = horas * 60 * 60;
  printf("O tempo total digitado em segundos é de: %d\n", segundos + minToSec + hourToSec);
  return 0;
}