
#include<stdio.h>


int main()
{   
    int n;
    printf("\nEnter the no of element in the array:");
    scanf("%d",&n);
    int a[n], b[n], result[2],i;
    printf("Enter the elements of array of alice:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of array of bob:");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    result[0]=0;
    result[1]=0;
    for(i=0;i<n;i++){
        if(a[i]>b[i]){
            result[0]++;
        }
        if(a[i]<b[i]){
            result[1]++;
        }
    }
    printf("%d  %d", result[0] ,result[1]);

}