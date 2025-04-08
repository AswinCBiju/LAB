void matrix_add(int row, int col,int row2, int col2, int Matrix[row][col], int Matrix2[row][col]){

    if(row!=row2 && col!=col2){
        return printf("Addition not possible !!\n");
    }
    int result[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            result[i][j]=(Matrix2[i][j]+Matrix[i][j]);
        }
    }
    printf("The Matrix Sum  :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf(" %d ",result[i][j]);
        }
        printf("\n");
    }

}