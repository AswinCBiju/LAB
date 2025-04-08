# include <stdio.h>
int main(){
	int n,i,j,flag;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int A[n];
	printf("Enter elements of the array:\n");
	for (i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	printf("Prime elements of the array:\n");
	for (i=0;i<n;i++){
		flag=0;
		if (A[i]<=1){
			continue;
		}
		for (j=2;j<=(A[i]/2);j++){
			if (A[i]%j==0){
				flag=1;
			}
		}
		if (flag==0){
			printf("%d ",A[i]);
		}
	}
	printf("\n");
	return 0;
}
