
#include <stdio.h>
#include <ctype.h>


int main(void)
{
	
	char dia;
 
        printf("Digite um numero de 1 a 7 para saber o dia da semana: ");
        printf("\n1 / 2 / 3 / 4 / 5 / 6 / 7\n");
        scanf("%c", &dia);
 
 
        switch (dia){   
            case '1':printf("\nDomingo\n");
                    break;
            case '2':printf("\nSegunda\n");
                    break;
            case '3':printf("\nTerca\n");
                    break;  
            case '4':printf("\nQuarta\n");  
			         break;  
            case '5':printf("\nQuinta\n");  
                    break;
            case '6':printf("\nSexta\n");  
			        break;  
            case '7':printf("\nSabado\n");   
			        break;  
            default: printf ("\nNao existe\n"); 	 
        }
                                           
    return 0;

}