//Nome: Jéssica Cristina Teixeira da Costa.
//Matrícula: 11721EEL014

#include<stdio.h>

int main ()
{
    char str[200];
    int num[200] ,i ,aux = 0;

    printf("Digite:\n");
    scanf("%s", str);
    getchar();

    for(i = 0 ; str[i] != '\0' ; i++)
    {
        num[i] = str[i];
        if(num[i] >= 48 && num[i] <= 57 ){
            num[i] = num[i] - 48;
            printf("%d", num[i]); }
        else{
            aux++;
            }
    }
    if( aux == i){
        printf("0");
	     }
	return 0;
}

