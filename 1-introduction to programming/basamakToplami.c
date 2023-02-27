# include<stdio.h>

int main(){
    int sayi,toplam,a,b,c,d;
    printf("Dört basamakli bir sayi giriniz: ");
    scanf("%d",&sayi); 
    a = sayi % 10; sayi = sayi/10;
    b = sayi % 10; sayi = sayi/10;
    c = sayi % 10; sayi = sayi/10;
    d = sayi % 10;
    toplam = a+b+c+d;
    printf("Sayinin rakamlar toplamı = %d\n",toplam);
    

    return 0;
}
