#include <stdio.h>
int main(){char A[100],B[50];gets(A);gets(B);
int i=0,j=0;while(A[i])i++;while(B[j]){A[i++]=B[j++];}
A[i]=0;puts(A);}
