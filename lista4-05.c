#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main ()
{


    int dias,ano;


        printf("Digite um numero de 1 a 12 para saber a quantidade de dias de cada mes correspondente:\n");
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
        scanf("%d", &dias);

        switch (dias) 
        {
	
            case 1: printf("\n31 dias\n");
                    break; 
      
            case 2: printf("\ninforme o ano para determinar se ele eh bissexto\n");
                    scanf("%d", &ano);
        
                if(ano%4==0 && (ano%100!=0 || ano%400==0)) {
                    printf("\nano bissexto\n");
                    printf("\n29 dias\n");}
        
                else{
                    printf("\nano normal\n");
                    printf("\n28 dias\n");}
                    break;
       
            case 3: printf("\n31 dias\n");
                     break;    

            case 4: printf("\n30 dias\n");
                    break;   
    
            case 5: printf("\n31 dias\n");
                    break; 
      
            case 6: printf("\n30 dias\n");
                    break;

            case 7: printf("\n31 dias\n");
                    break;   
    
            case 8: printf("\n31 dias\n");
                    break;  
     
            case 9: printf("\n30 dias\n");
                    break;   
    
            case 10: printf("\n31 dias\n");
                    break; 
      
            case 11: printf("\n30 dias\n");
                    break;   
    
            case 12: printf("\n31 dias\n");
                    break;   
                 
            default: printf ("\nNao existe\n"); 	 
        }
        

    return 0;

}
