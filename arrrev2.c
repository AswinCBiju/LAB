#include <stdio.h>
int main(){
    int n,i,l,u,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements:\n");
    for (i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    l=0;
    u=n-1;
    while (l<u){
        temp=A[l];
        A[l]=A[u];
        A[u]=temp;
        l++;
        u--;
    }
    printf("Reversed array:\n");
    for (i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
    return 0;
}