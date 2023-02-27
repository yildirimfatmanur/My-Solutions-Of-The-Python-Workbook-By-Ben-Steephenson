# include<stdio.h>
# define PI 3.1415

int main(){

    int r;
    float hacim;
    printf("Kurenin yaricapini giriniz: ");
    scanf("%d",&r);
    hacim = (float)4/3*(r*r*r)*PI;
    printf("Kurenin hacmi = %.2f\n",hacim); // r=2 oldugunda hacim 33.51 cıkıyor hesap 
                            // makinesinde 33.509 cikiyor yani yuvarlama yapılmis.
    return 0;
}