#include <stdio.h>

int main(){

  int res = 0, n, multiplicador;

  printf("Informe um número, e o multiplicador dele: \n");
  scanf("%d %d", &n, &multiplicador);

  for(int i = 0; i < multiplicador; i++){
    res += n;
  }

  printf("Resultado: %d\n", res);
  
  return 0;
}