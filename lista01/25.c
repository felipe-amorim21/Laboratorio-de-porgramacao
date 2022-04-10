#include <stdio.h>

int main() {
  int seg=0,min=0,hor=0;
  printf("Digite o tempo em segundos: ");
  scanf("%d", &seg);
  while(seg>=60){
  seg -= 60;
  min += 1; 
  }

  while(min>=60){
    min -=60;
    hor += 1;
  }
  
  printf("Segundos: %d\n",seg);
  printf("Minutos: %d\n",min);
  printf("Horas: %d\n",hor);
  return 0;
}