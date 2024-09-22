// wap in for linear search//
#include <stdio.h>
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int i, key;
    int flag=0;
    scanf("%d", &key);
    for (i = 0; i < 5; i++){
    
        if (A[i] == key)
        {
            printf("element found");
            flag++;
            break;
        }
        
        
        
    }
    if( flag==0){
            printf("not found");
        }
    return 0;
}
