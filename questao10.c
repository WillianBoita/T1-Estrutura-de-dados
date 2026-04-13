#include <stdio.h>

int main(){

  int n, resultado = 1;

  printf("Informe um fatorial: ");
  scanf("%d", &n);
  

  while (n >= 1) {
    resultado *= n;
    n--;
  }

  printf("%d\n", resultado);
  
  
  return 0;
}