//Jéssica Cristina Teixeira da Costa
//Matrícula: 11721EEL014

#include <stdio.h>

int main()
{
    char frase[256];
    int opcao, i, *pc;
    char virgula;
    int vetor[64];
    do{
    printf("\n\nDigite:\n1- Codificar\n2- Decodificar\n3- Sair do Programa\n");
    scanf("%d", &opcao); getchar();

    for(i = 0; i > 256; i++){
        frase[i] = '\0';
    }

    switch(opcao)
    {
        case 1:
        printf("\nDigite uma mensagem: ");
        fgets(frase,256,stdin);
        printf("\nMensagem codificada: ");

        for(i = 0; frase[i] != '\0'; ){
            pc = ((int*)(&frase[i]));
            if(i == 0){
                printf("%d", *pc);
            }
            else{
                printf(", %d", *pc);
            }
            i = i + 4;
        }
        break;

        case 2:
        i = 0;
        printf("\nDigite um codigo de uma mensagem com virgula e espaco entre os numeros:\nExemplo: 1234, 4567, ... : \n");

        while(1){
            scanf("%d%c", &vetor[i], &virgula);
            if(virgula != ','){
                break;
            }
            getchar();
            i++;
        }
        printf("\nMesagem descodificada: ");
        printf("%s\n", (char*)vetor);
        break;

        case 3:
            printf("Fim");
        break;

        default:
        printf("Opcao invalida");
        break;

    }
    }while(opcao != 3);

    return 0;
}

