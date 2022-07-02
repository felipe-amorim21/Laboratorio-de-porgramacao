#include <stdio.h>
#include <stdlib.h>

struct Professor{
  char *p1;
  char *p2;
};

struct Disciplina{
  char *d1;
  char *d2;
  char *d3;
  struct professor *pPr;
};

int main(){

  return 0;
}