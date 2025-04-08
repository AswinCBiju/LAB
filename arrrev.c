#include <stdio.h>
int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int A[n];
	printf("Enter the elements of the array:\n");
	for (int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	printf("The reversed array: ");
	for (int j=n-1;j>=0;j--){
		printf("%d ",A[j]);
	}
	printf("\n");
	return 0;
}
