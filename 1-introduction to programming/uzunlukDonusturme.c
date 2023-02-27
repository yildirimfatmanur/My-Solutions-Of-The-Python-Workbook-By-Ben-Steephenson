# include<stdio.h>


int main(){
    int inch,foot;
    float cm, uzunluk,uzunluk2;
    printf("Foot cinsinden uzunluk giriniz: ");
    scanf("%d",&foot);
    printf("inch cinsinden uzunluk giriniz: ");
    scanf("%d",&inch);
    uzunluk = 12*2.54*foot;
    uzunluk2 = 2.54*inch;
    cm = uzunluk+uzunluk2;
    printf("Verilen uzunluklar cm cinsinden %.2f cm'ye esittir.\n",cm);


    return 0;
}