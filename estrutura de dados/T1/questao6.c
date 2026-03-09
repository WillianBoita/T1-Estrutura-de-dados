#include <stdio.h>

int main(){

  int somador, res = 0;

  printf("Informe até qual número deve somar: \n");
  scanf("%d", &somador);

  for(int i = 1; i <= somador; i++){
    res += i;
  }

  printf("Resultado: %d\n", res);
  
  return 0;
}