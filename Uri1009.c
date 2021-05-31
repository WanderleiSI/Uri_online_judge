#include<stdio.h>
int main(){
    char nome[10];
    double salario,venda;
    scanf("%s %lf %lf",&nome,&salario,&venda);
    salario = salario + venda * 0.15;
    printf("TOTAL = R$ %.2lf\n",salario);
    return 0;
}