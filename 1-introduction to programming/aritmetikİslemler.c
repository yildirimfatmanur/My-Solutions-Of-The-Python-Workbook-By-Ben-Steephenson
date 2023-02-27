# include<stdio.h>

int main(){
    int sayi1,sayi2,toplam,fark,carpim;
    float bolum;
    printf("İlk sayiyi gir: ");
    scanf("%d",&sayi1);
    printf("İkinci sayiyi gir: ");
    scanf("%d",&sayi2);
    toplam = sayi2+sayi1;
    fark = sayi1-sayi2;
    carpim = sayi1*sayi2;
    bolum = (float)sayi1/sayi2;
    printf("toplam = %d\nfark = %d\ncarpim = %d\nbolum = %.2f\n",toplam,fark,carpim,bolum);



    return 0;
}