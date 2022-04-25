#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  unsigned char ch;
  int op,x,a;
  srand(time(NULL));
  ch = 0b0000000;
  int bit;
  
  do {
    puts("1. Ocupar armário");
    puts("2. Liberar armário");
    puts("3. Sair.");
    puts("Situação dos armários: ");
    for( int i = 7; i >= 0; i-- ) {
        printf( "%d", ( ch >> i ) & 1 ? 1 : 0 );
      }
    printf("\n");
    scanf("%d",&op);
    switch(op){
    case 1:
      a = rand() % 7;
      ch = ch | 1 << a;
      break;
    case 2:
      puts("Qual armário você quer desocupar? ");
      scanf("%d",&x);
      ch &= ~(1 << x);
      break;
    case 3:
      break;
      }
  } while(op!=3);

  return 0;
  }