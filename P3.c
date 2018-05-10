//Jéssica Cristina Teixeira da Costa
//Matrícula: 11721EEL014

#include <stdio.h>
int main()
{
    int i, n2, j, opcao, n, desl, numero, numero2, dec, a, b, c;
    printf("Digite uma opcao: \n1- NOT\n2- AND\n3- OR\n4- XOR\n5- Right Shift\n6- Left Shift\n");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero em Decimal.\n");
	scanf("%d", &n); getchar();
	numero = n;
	if(n < 0){
        n = n*(-1);
        a = 1;
	}
	char num[32], aux[32], num2[32], aux2[32], cont[32];
	for(i=0; i<32; i++){ //transformar em binário
		if(n % 2 == 0){
			num[i] = 0;
		}else{
			num[i] = 1;
		}
		n=n/2;
	}

	for(i=31, j = 0; i>=0; i--, j++){ //inverter ordem
		aux[j] = num[i];
    }
    if( opcao == 2 || opcao == 3 || opcao == 4 || opcao == 5 || opcao == 6){
        printf("Digite o segundo numero em Decimal: ");
        scanf("%d", &n2); getchar();
        numero2 = n2;
        if(n2 < 0){
        n2 = n2*(-1);
        b = 1;
	}
        for(i=0; i<32; i++){
		if(n2%2==0){
			num2[i]=0;
		}else{
			num2[i]=1;
		}
		n2=n2/2;
        }

        for(i=31, j = 0; i>=0; i--, j++){
            aux2[j] = num2[i];
        }
        }

    switch (opcao)
    {
    case 1: //NOT
        dec = ~numero;
        n = dec;
        if(n < 0){
        n = n*(-1);
        c = 1;
        }
        for(i=0; i<32; i++){ //transformar em binário
		if(n % 2 == 0){
			cont[i] = 0;
		}else{
			cont[i] = 1;
		}
		n = n / 2;
        }

        for(i = 31, j = 0; i >= 0; i--, j++){ //inverter ordem
		num2[j] = cont[i];
        }

        printf("NOT %d (" , numero);
        for(i=0; i<32; i++){
            if( a == 1){
            if( aux[i] == 0){
                aux[i] = 1;
            }
            else if( aux[i] == 1){
                aux[i] = 0;
				a = 0;
            }
	    	printf("%i", aux[i]);
	    	}
	    	else{
                printf("%i", aux[i]);
	    	}
        }
        printf(") : %d (", dec);
        for(i=0; i<32; i++){
            if( c == 1){
            if( num2[i] == 0){
                num2[i] = 1;
            }
            else if( num2[i] == 1){
                num2[i] = 0;
				c = 0;
            }
	    	printf("%i", num2[i]);
	    	}
	    	else{
                printf("%i", num2[i]);
	    	}
        }
        printf(")");
    break;

    case 2: //AND
        dec = numero & numero2;
        n = dec;
        if(n < 0){
        n = n*(-1);
        c = 1;
        }
        for(i=0; i<32; i++){ //transformar em binário
		if(n % 2 == 0){
			cont[i] = 0;
		}else{
			cont[i] = 1;
		}
		n = n / 2;
        }

        for(i = 31, j = 0; i >= 0; i--, j++){ //inverter ordem
		num2[j] = cont[i];
        }

        printf("%d (" , numero);
        for(i=0; i<32; i++){
            if( a == 1){
            if( aux[i] == 0){
                aux[i] = 1;
            }
            else if( aux[i] == 1){
                aux[i] = 0;
				a = 0;
            }
	    	printf("%i", aux[i]);
	    	}
	    	else{
                printf("%i", aux[i]);
	    	}
        }
        printf(") AND %d (" , numero2);
        for(i=0; i<32; i++){
            if( b == 1){
            if( aux2[i] == 0){
                aux2[i] = 1;
            }
            else if( aux2[i] == 1){
                aux2[i] = 0;
				b = 0;
            }
	    	printf("%i", aux2[i]);
	    	}
	    	else{
                printf("%i", aux2[i]);
	    	}
        }
        printf(") : %d (", dec);
        for(i=0; i<32; i++){
            if( c == 1){
            if( num2[i] == 0){
                num2[i] = 1;
            }
            else if( num2[i] == 1){
                num2[i] = 0;
				c = 0;
            }
	    	printf("%i", num2[i]);
	    	}
	    	else{
                printf("%i", num2[i]);
	    	}
        }
        printf(")");

    break;

    case 3: //OR
        dec = numero | numero2;
        n = dec;
        if(n < 0){
        n = n*(-1);
        c = 1;
        }
        for(i=0; i<32; i++){ //transformar em binário
		if(n % 2 == 0){
			cont[i] = 0;
		}else{
			cont[i] = 1;
		}
		n = n / 2;
        }

        for(i = 31, j = 0; i >= 0; i--, j++){ //inverter ordem
		num2[j] = cont[i];
        }

        printf("%d (" , numero);
        for(i=0; i<32; i++){
            if( a == 1){
            if( aux[i] == 0){
                aux[i] = 1;
            }
            else if( aux[i] == 1){
                aux[i] = 0;
				a = 0;
            }
	    	printf("%i", aux[i]);
	    	}
	    	else{
                printf("%i", aux[i]);
	    	}
        }
        printf(") OR %d (" , numero2);
        for(i=0; i<32; i++){
            if( b == 1){
            if( aux2[i] == 0){
                aux2[i] = 1;
            }
            else if( aux2[i] == 1){
                aux2[i] = 0;
				b = 0;
            }
	    	printf("%i", aux2[i]);
	    	}
	    	else{
                printf("%i", aux2[i]);
	    	}
        }
        printf(") : %d (", dec);
        for(i=0; i<32; i++){
            if( c == 1){
            if( num2[i] == 0){
                num2[i] = 1;
            }
            else if( num2[i] == 1){
                num2[i] = 0;
				c = 0;
            }
	    	printf("%i", num2[i]);
	    	}
	    	else{
                printf("%i", num2[i]);
	    	}
        }
        printf(")");
    break;

    case 4: //XOR
        dec = numero ^ numero2;
        n = dec;
        if(n < 0){
        n = n*(-1);
        c = 1;
        }
        for(i=0; i<32; i++){ //transformar em binário
		if(n % 2 == 0){
			cont[i] = 0;
		}else{
			cont[i] = 1;
		}
		n = n / 2;
        }

        for(i = 31, j = 0; i >= 0; i--, j++){ //inverter ordem
		num2[j] = cont[i];
        }

        printf("%d (" , numero);
        for(i=0; i<32; i++){
            if( a == 1){
            if( aux[i] == 0){
                aux[i] = 1;
            }
            else if( aux[i] == 1){
                aux[i] = 0;
				a = 0;
            }
	    	printf("%i", aux[i]);
	    	}
	    	else{
                printf("%i", aux[i]);
	    	}
        }
        printf(") XOR %d (" , numero2);
        for(i=0; i<32; i++){
            if( b == 1){
            if( aux2[i] == 0){
                aux2[i] = 1;
            }
            else if( aux2[i] == 1){
                aux2[i] = 0;
				b = 0;
            }
	    	printf("%i", aux2[i]);
	    	}
	    	else{
                printf("%i", aux2[i]);
	    	}
        }
        printf(") : %d (", dec);
        for(i=0; i<32; i++){
            if( c == 1){
            if( num2[i] == 0){
                num2[i] = 1;
            }
            else if( num2[i] == 1){
                num2[i] = 0;
				c = 0;
            }
	    	printf("%i", num2[i]);
	    	}
	    	else{
                printf("%i", num2[i]);
	    	}
        }
        printf(")");
    break;

    case 5: //Right Shift
        dec = numero >> numero2;
        n = dec;
        if(n < 0){
        n = n*(-1);
        c = 1;
        }
        for(i=0; i<32; i++){ //transformar em binário
		if(n % 2 == 0){
			cont[i] = 0;
		}else{
			cont[i] = 1;
		}
		n = n / 2;
        }

        for(i = 31, j = 0; i >= 0; i--, j++){ //inverter ordem
		num2[j] = cont[i];
        }

        printf("\%d (" , numero);
        for(i=0; i<32; i++){
            if( a == 1){
            if( aux[i] == 0){
                aux[i] = 1;
            }
            else if( aux[i] == 1){
                aux[i] = 0;
				a = 0;
            }
	    	printf("%i", aux[i]);
	    	}
	    	else{
                printf("%i", aux[i]);
	    	}
        }
        printf(") >> %d (" , numero2);
        for(i=0; i<32; i++){
            if( b == 1){
            if( aux2[i] == 0){
                aux2[i] = 1;
            }
            else if( aux2[i] == 1){
                aux2[i] = 0;
				b = 0;
            }
	    	printf("%i", aux2[i]);
	    	}
	    	else{
                printf("%i", aux2[i]);
	    	}
        }
        printf(") : %d (", dec);
        for(i=0; i<32; i++){
            if( c == 1){
            if( num2[i] == 0){
                num2[i] = 1;
            }
            else if( num2[i] == 1){
                num2[i] = 0;
				c = 0;
            }
	    	printf("%i", num2[i]);
	    	}
	    	else{
                printf("%i", num2[i]);
	    	}
        }
        printf(")");
    break;

    case 6: //Left Shift
        dec = numero << numero2;
        n = dec;
        if(n < 0){
        n = n*(-1);
        c = 1;
        }
        for(i=0; i<32; i++){ //transformar em binário
		if(n % 2 == 0){
			cont[i] = 0;
		}else{
			cont[i] = 1;
		}
		n = n / 2;
        }

        for(i = 31, j = 0; i >= 0; i--, j++){ //inverter ordem
		num2[j] = cont[i];
        }

        printf("\%d (" , numero);
        for(i=0; i<32; i++){
            if( a == 1){
            if( aux[i] == 0){
                aux[i] = 1;
            }
            else if( aux[i] == 1){
                aux[i] = 0;
				a = 0;
            }
	    	printf("%i", aux[i]);
	    	}
	    	else{
                printf("%i", aux[i]);
	    	}
        }
        printf(") << %d (" , numero2);
        for(i=0; i<32; i++){
            if( b == 1){
            if( aux2[i] == 0){
                aux2[i] = 1;
            }
            else if( aux2[i] == 1){
                aux2[i] = 0;
				b = 0;
            }
	    	printf("%i", aux2[i]);
	    	}
	    	else{
                printf("%i", aux2[i]);
	    	}
        }
        printf(") : %d (", dec);
        for(i=0; i<32; i++){
            if( c == 1){
            if( num2[i] == 0){
                num2[i] = 1;
            }
            else if( num2[i] == 1){
                num2[i] = 0;
				c = 0;
            }
	    	printf("%i", num2[i]);
	    	}
	    	else{
                printf("%i", num2[i]);
	    	}
        }
        printf(")");
    break;

    default:
          printf("Opcao invalida");
          break;
    }
    return 0;
}

