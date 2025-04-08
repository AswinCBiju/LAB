# include <stdio.h>
int main(){
	int n,i,j,temp;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int A[n];
	printf("Enter elements of the array:\n");
	for (i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	for (j=0;j<n-1;j++){
		for (i=0;i<n-j-1;i++){
			if (A[i]>A[i+1]){
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}
		}
	}
	printf("The sorted array is :\n");
	for (i=0;i<n;i++){
		printf("%d\t",A[i]);
	}
	printf("\n");
	return 0;
}	
