#include <stdio.h>
#include <ctype.h>


int main(void)
{
	
	char categoria;
 
 
        printf("Digite a categoria da carteira de motorista para saber qual é o tipo de veículo permitido para dirigir: ");
        printf("\nA / B / C / D / E\n");
        scanf("%c", &categoria);
 
        categoria=toupper(categoria);
        
 
        switch (categoria)
        {   
            case 'A':printf("\nVoce pode pilotar: Moto\n");
                break;
            case 'B':printf("\nVoce pode dirigir: Carro\n");
                break;
            case 'C':printf("\nVoce pode dirigir: Caminhao\n");
                break;  
            case 'D':printf("\nVoce pode dirigir: Onibus\n");  
			    break;  
            case 'E':printf("\nVoce pode dirigir: Carreta\n");  
        }
			                                          
    return 0;

}
