#include <stdio.h>
#include<string.h>

main() {
int pares=0, n=50, i=0, numero=2;

  while(i<n){
    
    pares += numero;
    numero += 2;
    i++;

    printf("\nsoma: %d",pares);
  }
