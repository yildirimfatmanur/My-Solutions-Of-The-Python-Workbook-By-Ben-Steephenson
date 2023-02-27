# include<stdio.h>

int main(){
    int n,sum;
    printf("kacinci sayiya kadar bulmak istiyorsun: ");
    scanf("%d",&n);
    sum = (n*(n+1))/2;
    printf("%d ye kadar olan pozitif tam sayilarin toplami = %d dir.\n",n,sum);

    return 0;
}