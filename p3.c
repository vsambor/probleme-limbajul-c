//  Probleme HubIT | # 3 | Intermediar
//
//  ENUNȚ:
//  Să se calculeze suma cifrelor tuturor elementelor dintr-un vector introdus de la tastatura de lungime "N".
//
//  @autor - Vasile Sambor

#include <stdio.h>


int citeste_numar(void);
void citeste_vector(int vector[], int lungime_vector);
void afiseaza_vector(int vector[], int lungime_vector);
int suma_cifrelor_numar(int numar);
int suma_cifrelor_vector(int vector[], int  lungime_vector);


int main() {
  printf("# PROBLEMA 3 \n\n");
  
  int lungime_vector = citeste_numar();
  int vector[50];
  
  citeste_vector(vector, lungime_vector);
  afiseaza_vector(vector, lungime_vector);
  
  int suma_elementelor = suma_cifrelor_vector(vector, lungime_vector);
  
  printf("\nSuma elementelor este: %d\n\n", suma_elementelor);
  
  return 0;
}

int citeste_numar() {
  int numar;
  printf("Introduceti un numar: ");
  scanf("%d", &numar);
  
  return numar;
}

void citeste_vector(int vector[], int lungime_vector) {
  int i;
  
  for(i = 0; i < lungime_vector; ++i) {
    printf("\nvector[%d] = ", i);
    scanf("%d", &vector[i]);
  }
}

void afiseaza_vector(int vector[], int lungime_vector) {
  puts("\n\n--- AFISARE VECTOR ---");
  int i;

  for(i = 0; i < lungime_vector; ++i) {
    printf("\nvector[%d] = %d", i, vector[i]);
  }
  
  puts("\n\n--- SFARSIT AFISARE ---\n");
}

int suma_cifrelor_numar(int numar) {
  int suma = 0;
  
  while(numar) {
    suma += numar % 10;
    numar /= 10;
  }
  
  return suma;
}

int suma_cifrelor_vector(int vector[], int lungime_vector) {
  int i;
  int suma = 0;
  
  for(i = 0; i < lungime_vector; ++i) {
    suma += suma_cifrelor_numar(vector[i]);
  }
  
  return suma;
}

