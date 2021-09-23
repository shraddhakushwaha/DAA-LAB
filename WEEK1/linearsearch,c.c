#include<stdio.h>
int main()
{
    int t;
    printf("enter number of test cases:");
    scanf("%d",&t);
    while(t--){
        int n,key,i;
        printf("limit of array:");
        scanf("%d",&n);
        int arr[n];
        printf("enter element of array:");
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        scanf("%d",&key);
        for(i=0;i<n;i++){
            if(arr[i]==key){
                printf("\n\n present %d\n\n\n",i+1);
                break;
            }
        }
        if(i==n){
            printf("\n not prresent %d\n\n\n",i);
        }
    }
    return 0;
}
