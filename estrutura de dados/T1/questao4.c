#include <stdio.h>

int main(){

  int n, negativos = 0, positivos = 0;

  printf("Informe 4 números inteiros: \n");

  for(int i = 0; i < 4; i++){
    printf("N%d: ", i + 1);
    scanf("%d", &n);

    if (n < 0){
      negativos++;
    } else {
      positivos++;
    }
    
  }

  printf("%d (+) e %d (-)", positivos, negativos); 
  
  return 0;
}