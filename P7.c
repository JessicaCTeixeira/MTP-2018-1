//Jéssica Cristina Teixeira da Costa
//11721EEl014
#include <stdio.h>

int func(int m, int n)
{
    int num, a, b;
    if(m == 0){
        num = n + 1;
    return num;
    }
    else if(m > 0 && n == 0){
        a = m - 1;
        b = 1;
        func(a,b);
    }
    else if(m > 0 && n > 0){
        a = m - 1;
        n = n - 1;
        b = func(m, n);
        func(a,b);
    }
}

int main()
{
    int m, n, resultado;
    printf("Digite o valor de M : \n");
    scanf("%d", &m);
    getchar();
    printf("Digite o valor de N : \n");
    scanf("%d", &n);
    getchar();

    resultado = func(m,n);
    printf("Resultado: %d", resultado);
    
    return 0;
}