# include<stdio.h>

int main(){
    int m,delta_T;
    float c = 4.186,isi;
    printf("Sıcaklik degisimini söyleyin: ");
    scanf("%d",&delta_T);
    printf("Suyun kütlesini söyleyin: ");
    scanf("%d",&m);
    isi = m*c*delta_T;
    printf("Isı = %.2f\n",isi);



    return 0;
}