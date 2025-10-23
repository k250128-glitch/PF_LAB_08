#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {12, 7, 9},
        {8, 15, 3},
        {5, 10, 6}
    };
    int max = matrix[0][0];

    // Find max value
    for (int i = 0; i < 3; i++) {      
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    // Print matrix
    printf("The matrix is:\n");
    for (int i = 0; i < 3; i++) {      
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        
    }

    printf("Maximum value in the matrix is: %d\n", max);

    return 0;
}
