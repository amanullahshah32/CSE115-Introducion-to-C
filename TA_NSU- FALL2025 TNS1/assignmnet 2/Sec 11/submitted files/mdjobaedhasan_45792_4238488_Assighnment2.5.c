
#include <stdio.h>

    int main()
{
        int p[3][3], i, j;
        int diag = 0, border = 0;
        int rowSum, colSum, maxRow = 0, maxCol = 0;

            for(i = 0; i < 3; i++)
                for(j = 0; j < 3; j++)
                    scanf("%d", &p[i][j]);

        for(i = 0; i < 3; i++)
            diag += p[i][i];

        for(i = 0; i < 3; i++)
            for(j = 0; j < 3; j++)
                if(i==0 || j==0 || i==2 || j==2)
                    border += p[i][j];

        for(i = 0; i < 3; i++)
    {
            rowSum = 0;
                for(j = 0; j < 3; j++)
                    rowSum += p[i][j];

            printf("Row%d sum: %d\n", i, rowSum);

        if(rowSum > maxRow) maxRow = rowSum;
    }

        for(j = 0; j < 3; j++)
    {
            colSum = 0;
                for(i = 0; i < 3; i++)
                    colSum += p[i][j];

            printf("Column%d sum: %d\n", j, colSum);
                if(colSum > maxCol) maxCol = colSum;
    }

        printf("Sum of main diagonal : %d\n", diag);
        printf("Sum of border : %d\n", border);
        printf("Maximum row sum: %d\n", maxRow);
        printf("Maximum column sum: %d\n", maxCol);

        return 0;
}
