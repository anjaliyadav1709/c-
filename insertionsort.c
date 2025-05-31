 #include<stdio.h>
int main()
{
    int n,i,j,temp;
    int a[]={6,5,4,3,2,1};
    n=sizeof(a)/sizeof(a[0]);
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0&&a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    
    return 0;
} 