#include<stdio.h>
int main(){
    int nFunionario,nHoras;
    float vHoras;
    scanf("%d %d %f",&nFunionario,&nHoras,&vHoras);
    printf("NUMBER = %d\n",nFunionario);
    printf("SALARY = U$ %.2f\n",nHoras*vHoras);
    return 0;
}