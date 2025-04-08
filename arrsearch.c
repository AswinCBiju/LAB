# include <stdio.h>
int main(){
	int n,i,j,u,flag;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int A[n];
	printf("Enter elements of the array:\n");
	for (i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	printf("Enter element to be searched: ");
	scanf("%d",&u);
	flag=0;
	for (j=0;j<n;j++){
		if (A[j]==u){
			printf("Element %d found at %dth index\n",A[j],j);
			flag=1;
		}
	}
	if (flag==0){
		printf("Element do no exist...\n");
	}
	return 0;
}
