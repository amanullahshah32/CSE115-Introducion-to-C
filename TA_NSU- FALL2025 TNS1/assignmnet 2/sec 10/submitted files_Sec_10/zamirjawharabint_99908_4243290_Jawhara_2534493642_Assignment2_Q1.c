#include <stdio.h>

int max(int *p,int size){
int maximum= *p;
    for(int i=1; i<size; i++)
    {
    if(*(p+i)> maximum)
    maximum= *(p+i);
    }
return maximum;
}

int main(){
int arr[10]={100, 24, 87, 15, 56 ,45 , 1, 150, 99, 222};

printf("max= %d\n", max(arr,10));

return 0;
}
