# include<stdio.h>

int main(){
    int a,b,c,sum,avg,product,smallest,largest,temp;
    printf("uc farkli sayi gir: ");
    scanf("%d %d %d",&smallest,&largest,&c);
    sum = smallest+largest+c;
    product = smallest*largest*c;
    avg = sum/(float)3;
    if(smallest>largest){
        temp = smallest;
        smallest = largest;
        largest = temp;
        if(c<smallest){
            c = smallest;
        }
        else if(c>largest){
            c = largest;
        }
    }
    else{
        if(c<smallest){
            c = smallest;
        }
        else if(c>largest){
            c = largest;
        }

    }
    printf("Sum = %d\nAverage = %d\nProduct = %d\nSmallest = %d\nLargest = %d\n",
    sum,avg,product,smallest,largest);




    return 0;
}
