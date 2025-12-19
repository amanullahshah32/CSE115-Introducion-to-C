#include<stdio.h>
int main()
{
int a[3][3];
printf("Enter matrix elements:\n");
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
scanf("%d",&a[i][j]);
int diag=0, border=0;
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
{
if(i==j)
diag += a[i][j];
if(i==0 || i==2 || j==0 || j==2)
border += a[i][j];
}
printf("Sum of main diagonal: %d\n", diag);
printf("Sum of border elements: %d\n", border);
int maxRow = 0;
for(int i=0;i<3;i++)
{
int sum = 0;
for(int j=0;j<3;j++)
sum += a[i][j];
if(sum > maxRow)
maxRow = sum;
}
printf("Maximum row sum: %d\n", maxRow);
int maxCol = 0;
for(int j=0;j<3;j++)
{
int sum = 0;
for(int i=0;i<3;i++)
sum += a[i][j];
if(sum > maxCol)
maxCol = sum;
}
printf("Maximum column sum: %d\n", maxCol);
return 0;
}
