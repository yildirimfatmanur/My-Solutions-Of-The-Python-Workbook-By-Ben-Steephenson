# include<stdio.h>
# include<math.h>


int main(){
    int a1,b1,a2,b2,a3,b3,c;
    float s,alan;
    printf("Birinci kenar: ");
    scanf("%d",&a1);
    printf("İkinci kenar: ");
    scanf("%d",&a2);
    printf("Ucuncu kenar: ");
    scanf("%d",&a3);
    s = (a1+a2+a3)/(float)2;
    b1 = s-a1;
    b2 = s-a2;
    b3 = s-a3;
    c = s*b1*b2*b3;
/*  alan = pow(c,0.5);
    printf("Alan: %.2f\n",alan);*/
    //printf("%d\n",c);
    printf("Alan: %f\n",pow(c,0.5));

    return 0;
}
