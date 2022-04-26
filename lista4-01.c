#include <stdio.h>
#include <ctype.h>
#include <math.h>


int main(void)
{
 
    int op;
    float num1,num2,res,raiz;

        printf("Calculadora\n\n");
        printf("Digite os numeros para realizar a operacao:\n");

        printf("Primeiro numero:");
        scanf("%f", &num1);

        printf("Segundo numero:");
        scanf("%f", &num2);

        printf("\nEscolha a opcao:\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Raiz\n");
        printf("6. Resto\n");
        printf("7. Exponenciacao\n");
        scanf ("%d",&op);


            switch (op)
            {
                case 1:
                    res = num1 + num2;
                printf("\nResultado da soma = %.2f\n\n", res);
                break;
                case 2:
                    res = num1 - num2;
                printf("\nResultado da subtracao = %.2f\n\n", res);
                break;
                case 3:
                    res = num1 * num2;
                printf("\nResultado da multiplicacao = %.2f\n\n", res);
                break;
                case 4:
                if (num2 == 0)
                printf ("\nDivisao por zero!\n\n");
                else
                {
                    res = num1 / num2;
                printf("\nResultado da divisao = %.2f\n\n", res);
                }
                break;
                case 5:
                    raiz = sqrt(num1);
                printf("\nResultado da raiz 1 = %.2f\n\n", raiz);
                break;
                default:
                printf ("\nOpcao inexistente!\n");
            }
 
    return 0;
}