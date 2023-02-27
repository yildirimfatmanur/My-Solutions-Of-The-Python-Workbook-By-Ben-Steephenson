# include<stdio.h>
# include<math.h>
# define PI 3.1415

int main(){
    int kenarUzunlugu,kenarSayisi;
    float alan;
    printf("Kenar sayisini giriniz: ");
    scanf("%d",&kenarSayisi);
    printf("Kenar uzunlugunu giriniz: ");
    scanf("%d",&kenarUzunlugu);
    alan = (kenarUzunlugu*kenarUzunlugu*kenarSayisi)/(float)(4*tan(PI/(float)kenarSayisi));
    printf("%f\n",alan);
    



    


    return 0;
}