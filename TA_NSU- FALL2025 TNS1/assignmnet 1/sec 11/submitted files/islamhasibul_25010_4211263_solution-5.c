#include<stdio.h>
int main(){
    int n,i,c=0;
    printf("Enter your size :");
    scanf("%d",&n);
    float a[n],s=0;
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
        s+=a[i];
    }
    float avg=s/n;
    printf("Average = %f, The elements greater than average are: ",avg);
    for(i=0;i<n;i++){
        if(a[i]>avg){
            if(c>0) printf(", ");
            printf("%.0f",a[i]);
            c++;
        }
    }
}