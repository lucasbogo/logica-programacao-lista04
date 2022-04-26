#include <stdio.h>
#include <ctype.h>


int main ()
{
	
    int tri;


        printf("Digite um numero de 1 a 12 para saber o trimestre correspondente:\n");
        printf("\n1. janeiro\n");
        printf("2. fevereiro\n");
        printf("3. marco\n");
        printf("4. abril\n");
        printf("5. maio\n");
        printf("6. junho\n");
        printf("7. julho\n");
        printf("8. agosto\n");
        printf("9. setembro\n");
        printf("10. outubro\n");
        printf("11. novembro\n");
        printf("12. dezembro\n\n");
        scanf("%d", &tri);

        switch (tri) 
        {
	
            case 1:
            case 2:
            case 3:
                printf("\nprimeiro trimestre\n");
                    break;    

            case 4:
            case 5:
            case 6:
                printf("segundo trimestre\n");
                    break;

            case 7:
            case 8:
            case 9:
                printf("terceiro trimestre\n");
                    break;

            case 10:
            case 11:
            case 12:
                printf("quarto trimeste\n");
                    break;              

            default: 
                printf ("\nNao existe\n"); 	 
        }

    return 0;

}
