# include <stdio.h>
int main(){
	int n,i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int A[n];
	printf("Enter elements of the array:\n");
	for (i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	printf("Even elements of the array:\n");
	for (i=0;i<n;i++){
		if (A[i]%2==0){
			printf("%d ",A[i]);
		}
	}
	printf("\n");
	return 0;
}
