#include <stdio.h>
#include <math.h>
int main(){
    int n,sq,d=0,ld;
    printf("Enter your number: ");
    scanf("%d",&n);
    sq=n*n;
    int temp=n;
    while (temp!=0){
        d++;
        temp/=10;
    }
    if (n==0){
        printf("0 is an automorph\n");
    }
    ld=sq % (int)pow(10,d);
    if (ld==n){
        printf("Number is an automorph\n");
    }
    else {
        printf("Number is not an automorph..");
    }
    return 0;
}