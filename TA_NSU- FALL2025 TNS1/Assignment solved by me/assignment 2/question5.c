
#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j;
    int sumDiag = 0, sumBorder = 0;
    int maxRow = 0, maxCol = 0;

    // --- STEP 1: INPUT ---
    printf("Enter 3x3 matrix elements:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // --- STEP 2: CALCULATE SUMS ---
    for(i = 0; i < 3; i++) {
        int currentRowSum = 0;
        int currentColSum = 0;

        for(j = 0; j < 3; j++) {
            // Task A: Sum of Main Diagonal (i equals j)
            if(i == j) {
                sumDiag += arr[i][j];
            }

            // Task B: Sum of Border
            // Condition: First Row OR First Col OR Last Row OR Last Col
            if(i == 0 || j == 0 || i == 2 || j == 2) {
                sumBorder += arr[i][j];
            }

            // Calculations for C & D
            currentRowSum += arr[i][j]; // Add current row elements
            currentColSum += arr[j][i]; // Add current col elements (Notice arr[j][i])
        }

        // Check if this row/col is the biggest we've seen so far
        if(currentRowSum > maxRow) maxRow = currentRowSum;
        if(currentColSum > maxCol) maxCol = currentColSum;

        // Print individual row sums as per sample output [cite: 80-82]
        printf("Row%d sum: %d\n", i, currentRowSum);
    }

    // Print individual column sums [cite: 84-86]
    // Note: We need a separate loop to print col sums cleanly if we want to match output format exactly,
    // but calculation is already done above.
    printf("Column0 sum: %d\n", (arr[0][0]+arr[1][0]+arr[2][0]));
    printf("Column1 sum: %d\n", (arr[0][1]+arr[1][1]+arr[2][1]));
    printf("Column2 sum: %d\n", (arr[0][2]+arr[1][2]+arr[2][2]));

    printf("Sum of main diagonal element: %d\n", sumDiag);
    printf("Sum of border element: %d\n", sumBorder);
    printf("Maximum row sum: %d\n", maxRow);
    printf("Maximum column sum: %d\n", maxCol);

    // --- STEP 3: TRIANGLES ---

    // Task E: Upper Right Triangle (j >= i)
    // 13 3 4
    //    6 7
    //      9
    printf("\nUpper Right Triangle:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(j >= i) printf("%d ", arr[i][j]);
            else printf("   "); // Print spaces to keep alignment
        }
        printf("\n");
    }

    // Task F: Lower Right Triangle
    // This usually means the bottom-right corner (Indices where i+j >= 2)
    //       4
    //    6 7
    // 10 8 9
    printf("\nLower Right Triangle:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i + j >= 2) printf("%d ", arr[i][j]);
            else printf("   ");
        }
        printf("\n");
    }

    return 0;
}
