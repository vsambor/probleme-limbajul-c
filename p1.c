//  Probleme HubIT | # 1 | Începator
//
//  CERINȚĂ:
//  Să se afișeze pe ecran suma a două numere întregi citite de la tastatuă.
//
//  @autor - Vasile Sambor

#include <stdio.h>

int main() {
  printf("# PROBLEMA 1 \n\n");
  
  int numar1;
  int numar2;
  
  printf("Introduceti primul numar: ");
  scanf("%d", &numar1);
  
  printf("Introduceti al doilea numar: ");
  scanf("%d", &numar2);
  
  int suma = numar1 + numar2;
  
  printf("\nSuma este: %d\n\n", suma);
  
  return 0;
}
