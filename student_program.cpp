#include <stdio.h>
#include <stdlib.h>

void GetMatrix(int **value, int *row, int *col);
void PrintMatrix(int **value, int row, int col);

int main() {
    int *data, m = 3, n = 3 ;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    data = new int[ m * n ] ;
    GetMatrix( &data, &m, &n ) ;
    PrintMatrix( &data, m, n ) ;
    
    
    return 0 ;
}//end function

void GetMatrix(int **value, int *row, int *col) {
    printf("Enter matrix values:\n ");
    for (int i = 0; i < (*row) * (*col); i++) {
        scanf("%d", (*value + i));
    }
}

void PrintMatrix(int **value, int row, int col) {
    printf("Matrix (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", (*value)[i * col + j]);
        }
        printf("\n");
    }
    
}


