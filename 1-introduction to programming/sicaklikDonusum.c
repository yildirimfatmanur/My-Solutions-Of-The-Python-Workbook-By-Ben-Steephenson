# include<stdio.h>

int main(){
    float c,f,k;

    printf("Derece cinsinden sicakligi giriniz: ");
    scanf("%f",&c);

    k = c + (273.15);
    f = (c*1.8) + 32;

    printf("%.2f celcius = %.2f fahrenheit.\n",c,f);
    printf("%.2f celcius = %.2f kelvin.\n",c,k);

    return 0;
}