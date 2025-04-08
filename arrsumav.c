#include <stdio.h>
int main(){
	int n,sum,av,i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int A[n];
	sum=0;
	av=0;
	printf("Enter array elements:\n");
	for (i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	printf("Inputted array:\n");
	for (i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	for (i=0;i<n;i++){
		sum+=A[i];
	}
	av=sum/n;
	printf("The sum is: %d\nThe avergae is: %d\n",sum,av);
	return 0;
}
