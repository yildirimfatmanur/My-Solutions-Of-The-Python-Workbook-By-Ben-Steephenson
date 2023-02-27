# include<stdio.h>

int main(){
    int taban,yukseklik;
    float alan;
    printf("taban: ");
    scanf("%d",&taban);
    printf("yukseklik: ");
    scanf("%d",&yukseklik);
    alan = yukseklik*taban/(float)2;
    printf("Alan: %.2f\n",alan);


    return 0;
}