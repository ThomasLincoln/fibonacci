#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool encontrado = false;
  int N, a = 0, b = 1, auxiliar = -1;
  printf("Insira o número: \n");
  scanf("%i", &N);
    for(int i = 0; i < N; i++) {
        auxiliar = a + b;
        a = b;
        b = auxiliar;
      if(auxiliar == N){
        printf("o número foi encontrado");
        encontrado = true;
      }
    }
  if(encontrado == false){
    printf("o número não foi encontrado");
  }
  return 0;
}