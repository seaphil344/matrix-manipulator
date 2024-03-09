#include <stdio.h>

int main(void) {

    int rows;
    int columns;

    printf("How many rows: ");
    scanf("%d", &rows);
    printf("How many columns: ");
    scanf("%d", &columns);

    int matrix[rows][columns];

    for ( int i = 0; i < rows; i++ ){
        for ( int j = 0; j < columns; j++ ){
            printf("What number for a%d%d: ", i+1, j+1 );
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows;i++) {
        for ( int j = 0; j < columns; j++ ){
            printf("% d", matrix[i][j]);
            if ( j == columns - 1) {
                printf("\n");
            }
        }
    }
}
