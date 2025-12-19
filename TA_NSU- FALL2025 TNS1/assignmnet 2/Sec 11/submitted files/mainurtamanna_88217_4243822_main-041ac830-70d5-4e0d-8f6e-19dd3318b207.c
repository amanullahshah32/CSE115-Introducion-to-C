#include <stdio.h>
#include <stdlib.h>

int max(int*p,int size){
    int maximum =*p;

    for(int i=1;i<size;i++){
        if(*(p + i)>maximum){
          maximum =*(p + i);
        }
    }

    return maximum;
}
int main() {
    int arr[]={10,25,8,45,12};
    int size=5;
    printf("Maximum element is: %d\n", max(arr, size));

    return 0;
}
