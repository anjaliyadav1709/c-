#include<stdio.h>
 void quicksort( int a[],int lb,int ub){
    if(lb<ub){
        int  loc= partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);

    }
}
 int partition( int a[], int lb, int ub){
     int pivot=a[lb];
     int start=lb;
    int end=ub;
    while(start<end){
        while(a[start]<=pivot){
            start++;
        }
        while(a[end]>pivot){
            end--;

        }
        if(start<end){
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    int temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;
}
int main()
{
    
    int a[]={ 2,3,5,6,3,9,1,5,7};
     int n=sizeof(a)/sizeof(a[0]);
    quicksort(a,0,n-1);
    for( int i=0;i<n;i++){
        printf("%d   ",a[i]);
    }
    
    
    return 0;
}