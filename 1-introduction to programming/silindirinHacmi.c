# include<stdio.h>

int main(){
    int r,h;
    float pi=3.1415,hacim;
    printf("Yükseklik: ");
    scanf("%d",&h);
    printf("Yaricap: ");
    scanf("%d",&r); 
    hacim = pi*(r*r)*h;
    printf("silindirin hacmi: %.2f\n",hacim);

    return 0;
}
