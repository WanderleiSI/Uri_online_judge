#include<stdio.h>
int main(){
    const double pi = 3.14159;
    double volume;
    int raio;
    scanf("%i",&raio);
    volume = (4/3.0)*pi*pow(raio, 3);
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}