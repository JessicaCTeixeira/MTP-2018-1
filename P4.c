//Jéssica Cristina Teixeira da Costa
//Matricula: 11721EEL014

int main(){
    int i, cum = 0, aux;
    char num[256];
    int vet[256];
    printf("Digite: ");
    scanf("%s", num);
    for(i = 0; num[i] != '\0'; i++){
        if(num[i] >= '0' && num[i] <= '9'){
            vet[i] = num[i] - '0';
        }
    }
    for(aux = 0; aux < i; aux++){
        if(num[aux] >= '0' && num[aux] <= '9'){
            cum = cum*10 + vet[aux];
        }
    }
    printf("\nRetorno: %d", cum);
    return 0;
}
