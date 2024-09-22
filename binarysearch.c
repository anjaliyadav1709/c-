// wap in c for binary search
#include <stdio.h>
int main()
{
    int x, j, low, high, mid;
    int flag = 0;
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("element that is to be found");
    scanf("%d", &x);
    low = 0;
    high = 7;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            printf("position of element found %d",mid+1);
            flag++;
            break;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            
        }
    }
    if (flag==0)
    {
        printf("not found");
    }
    
    return 0;
    
}