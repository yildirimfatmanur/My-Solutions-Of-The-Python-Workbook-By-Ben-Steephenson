# include<stdio.h>

int main(){
    int kilo;
    float boy, index;
    printf("Boy: ");
    scanf("%f",&boy);
    printf("Kilo: ");
    scanf("%d",&kilo);
    index = (float)kilo/(boy*boy);
    printf("%.2f\n",index);


    return 0;
}