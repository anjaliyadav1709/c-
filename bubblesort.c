#include<stdio.h>
int main(){
    
    int n, i,j,temp;
    printf("enter the no of elements in the array");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("array before sorting\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n");
    printf("sorted array\n");
    for(i=0;i<n;i++){
        
            printf("%d ",a[i]);
        
    }
    return 0;

}