//Jéssica Cristina Teixeira da Costa
//11721EEl014
#include <stdio.h>

int soma(int vetor[20], int num)
{
    int result = 0, i;
    for(i = 0; i < num; i++){
        result = result + vetor[i];
    }
    return result;
}

float media(int resultsoma, int num)
{
    float result;
    result = resultsoma / (float)num;
    return result;
}

int main()
{
    int vetor[20], i, num, resultsoma;
    float resultmedia;

    printf("Digite a quantidade de numeros inteiros entre 5 e 20: ");
    scanf("%d", &num);
    getchar();

    for(i = 0; i < 20; i++){
        vetor[i] = 0;
    }
    printf("Digite o vetor na posicao: \n");
    for(i = 0; i < num; i++){
        printf("[%d] ", i + 1);
        scanf("%d", &vetor[i]);
        getchar();
    }
    resultsoma = soma(vetor, num);
    resultmedia = media(resultsoma, num);
    printf("Media: %.1f", resultmedia);
    
    return 0;
}
