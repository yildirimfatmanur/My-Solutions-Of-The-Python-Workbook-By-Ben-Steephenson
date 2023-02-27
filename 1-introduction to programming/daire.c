# include<stdio.h>
# define PI 3.14159

int main(){
    int cap,yaricap;
    double cevre,alan;
    printf("Yaricap = ");
    scanf("%d",&yaricap);
    cap = 2*yaricap;
    alan = PI*(yaricap*yaricap);
    cevre = 2*PI*yaricap;
    printf("cap = %d\ncevre = %f\nalan = %f\n",cap,cevre,alan);


    return 0;
}