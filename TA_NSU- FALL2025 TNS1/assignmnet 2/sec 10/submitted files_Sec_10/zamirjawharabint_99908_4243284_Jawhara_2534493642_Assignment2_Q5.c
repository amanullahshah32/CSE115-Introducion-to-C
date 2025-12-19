#include <stdio.h>

int main() {
int num_index, row, col;

printf("Enter index number: ");
scanf("%d", num_index);
int A [num_index][num_index];

printf("Enter the elements: ");
for(row= 0; row< num_index; row++)
  {
    for(col=0; col<num_index; col++)
    {
        scanf("%d", A[row][col]);
    }
  }

int sumDia = 0;
for(row= 0; row< num_index; row++)
  {
    for(col=0; col<num_index; col++)
    {
     if(row=col)
     {
       sumDia=sumDia+ A[row][col];
     }
    }
  }
printf("The Sum of Main Diagonal: %d", sumDia);

int sumBord=0;
for(row=0; row<num_index; row++)
 {
  for(col=0; col<num_index; col++)
   {
    if(row==0|| row==num_index-1|| col==0|| col==num_index-1)
    {

    sumBord= sumBord+A[row][col];
    }
   }
 }
printf("sum of border elements: %d\n", sumBord);

int maxRow=0, rowSum=0;
for(row=0; row<num_index; row++)
{
    for(col=0; col<num_index; col++)
        rowSum= rowSum + A[row][col];
    if(rowSum > maxRow)
        maxRow = rowSum;
    printf("Row%d sum: %d\n", row, rowSum);
}
printf("maximum row sum: %d\n", maxRow);

int maxCol=0, colSum=0;
for(col=0; col<num_index; col++)
{
    for(row=0; row<num_index; row++)
        colSum= colSum + A[row][col];
    if(colSum > maxCol)
        maxCol = colSum;
    printf("col%d sum: %d\n", col, colSum);
}
printf("maximum col sum: %d\n", maxCol);

printf("Upper Right Triangle: ");
for(row= 0; row< num_index; row++)
  {
    for(col=0; col<num_index; col++)
    {
     if( row>=col)
     {
    printf(" %d ", A[row][col]);
     }
    }
  }

printf("Lower Right Triangle: ");
for(row= 0; row< num_index; row++)
  {
    for(col=0; col<num_index; col++)
    {
     if( row<=col)
     {
    printf(" %d ", A[row][col]);
     }
    }
  }
return 0;
}
