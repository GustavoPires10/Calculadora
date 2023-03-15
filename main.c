#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1=0,v2=0,r=0;
    char op="";

    printf("Insira o primeiro numero \n");
    scanf("%f", &v1);
    printf("Insira o operador desejado \n");
    scanf("%c", &op);
    printf("Insira o segundo numero \n");
    scanf("%f", &v2);

    switch(op)
    {
        case '+':
            r=v1+v2;
            printf("A soma dos valores e %f", r);
            break;
        case '-':
            r=v1-v2;
            printf("A subtracao dos valores e %f", r);
            break;
        case '/':
            r=v1/v2;
            printf("A divisao dos valores e %f", r);
            break;
        case '*':
            r=v1*v2;
            printf("A multiplicacao dos valores e %f", r);
            break;
        default:
            printf("Operador invalido");

    }
    return 0;
}
