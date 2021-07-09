#include<stdio.h>
int main(){
    int codPro1,codPro2,qnt1,qnt2;
    float valor1,valor2;
    scanf("%i %i %f",&codPro1,&qnt1,&valor1);
    scanf("%i %i %f",&codPro2,&qnt2,&valor2);
    printf("VALOR A PAGAR: R$ %.2f\n",qnt1 * valor1 + qnt2 * valor2);
    return 0;
}