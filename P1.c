//Nome: Jéssica Cristina Teixeira da Costa 
//Matrícula: 11721EEL014
#include <stdio.h>

int main(){
  int i = 0, estado = 0;
  char automato[256];
  printf("Digite um numero em binario: ");
  scanf("%s", automato);
  for(i = 0; automato[i] != '\0'; i++){
    if( automato[i] == '0'){
        if( estado == 0 ){
            estado = 0;
        }
        else if( estado == 1){
            estado = 2;
        }
        else {
            estado = 1;
        }
    }
    else if( automato[i] == '1'){
         if( estado == 0){
            estado = 1;
        }
        else if( estado == 1){
            estado = 0;
        }
        else {
            estado = 2;
        }
    }
  }
  if( estado == 0){
      printf("O numero eh multiplo de 3");
  }
  else {
      printf("O numero nao eh multiplo de 3");
  }
  return 0;
}
