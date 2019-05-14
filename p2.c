//  Probleme HubIT | # 2 | Începator
//
//  ENUNȚ:
//  Să se afișeze pe ecran maximul dintre trei numere intregi citite de la tastatură.
//
//  @autor - Vasile Sambor

#include <stdio.h>

int main() {
  printf("# PROBLEMA 2 \n\n");
  
  int numar1;
  int numar2;
  int numar3;
  int max;
  
  printf("Introduceti numerele: ");
  scanf("%d%d%d", &numar1, &numar2, &numar3);
  
  if(numar1 >= numar2) {
    max = numar1;
  } else {
    max = numar2;
  }
  
  if(numar3 > max) {
    max = numar3;
  }
  
  printf("\nMax dintre %d, %d si %d este %d\n\n", numar1, numar2, numar3, max);  

  return 0;
}
