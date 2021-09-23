#include<stdio.h>
int main()
{
    int t;
    printf("enter number of test cases:");
    scanf("%d",&t);
    while(t--){
        int n,i,key,count=0;
        printf("limit of array:");
        scanf("%d",&n);
        int arr[n];
        printf("enter element of array:");
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        scanf("%d",&key);
        int mid,high,low;
        low = 0;
        high= n-1;
        while(low<=high){
            mid = (high+low)/2;
            count++;
            if(arr[mid]>key){
                high = mid-1;
            }
            else if(arr[mid]<key){
                low = mid+1;
            }
            else{
                printf("present %d\n\n\n",count);
                break;
            }
        }
        if(low>high)
            printf("not present %d\n\n\n",count);
    }
    return 0;
}
