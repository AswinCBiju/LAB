#include <stdio.h>
int matinp(int r,int c, int M[r][c]){
    printf("Enter matrix elements: ");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int mprint(int r,int c,int M[r][c]){
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d  ",M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int mtranspose(int r, int c, int M[r][c]){
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d  ",M[j][i]);
        }
        printf("\n");
    }
    return 0;
}
int madd(int r, int c,int r1, int c1, int M[r][c], int M1[r1][c1]){
    if(r!=r1 || c!=c1){
        printf("Addition not possible.......");
    }
    int result[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            result[i][j]=(M1[i][j]+M[i][j]);
        }
    }
    printf("The Matrix Sum  :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d  ",result[i][j]);
        }
        printf("\n");
    }

}
int mprod(int r, int c, int r1, int c1, int M[r][c], int M1[r1][c1]){
    if (c!=r1){
        printf("Multiplication not possible........");
    }
    
    int R[r][c1];
    for (int i=0;i<r;i++){
        for (int j=0;j<c1;j++){
            R[i][j]=0;
            for (int k=0;k<c;k++){
                R[i][j]+=M[i][k]*M1[k][j];
            }
        }
    }
    printf("The matrix product: \n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c1;j++){
            printf("%d  ",R[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int main(){
    int r,c;
    printf("Matrix A\n");
    printf("Enter (row_column) less than 10: ");
    scanf("%d %d",&r,&c);
    int A[r][c];
    int r1,c1;
    printf("Matrix B\n");
    printf("Enter (row_column) less than 10: ");
    scanf("%d %d",&r1,&c1);
    int B[r1][c1];
    printf("Matrix A:\n");
    matinp(r,c,A);
    printf("Matrix B:\n");
    matinp(r1,c1,B);
    printf("Matrix A:\n");
    mprint(r,c,A);
    printf("Matrix B:\n");
    mprint(r1,c1,B);
    printf("Transpose of A:\n");
    mtranspose(r,c,A);
    mprod(r,c,r1,c1,A,B);
    madd(r,c,r1,c1,A,B);
}