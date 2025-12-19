#include<stdio.h>
int main(){
int X[100], i, num, addedValue;

printf("Enter size of array: ");
scanf("%d", &num);
printf("Enter elements: ");
    for(i=0; i<num; i++)
        scanf("%d", &X[i]);

printf("Add a new element: ");
scanf("%d", &addedValue);

X[num]=addedValue;
num++;

printf("Array after adding a new element: ");
    for(i=0; i<num; i++)
        printf("%d ", X[i]);

return 0;
}

