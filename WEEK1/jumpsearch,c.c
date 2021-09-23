#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    printf("enter number of test cases:");
    scanf("%d",&t);
    while(t--){
        int n,i,key,count=1,flag=0;
        printf("limit of array:");
        scanf("%d",&n);
        int arr[n];
        printf("enter element of array:");
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        scanf("%d",&key);
        i=0;
        if(arr[i]==key){
            printf("Present %d\n",count);
            continue;
        }
        int m=sqrt(n);
        i=i+m;
        while(i<n&&arr[i]<key){
            count++;
            i=i+m;
        }
        if(arr[i]==key){
            count++;
            printf("PRESENT %d\n",count);
            continue;
        }
        int k = i<n-1?i:n-1;
        for(int j=i-m+1;j<k;j++){
            count++;
            if(arr[j]==key){
                printf("present %d\n",count);
                flag = 1;
                break;
            }
        }
        if(flag==0)
            printf("not present %d\n",count);
    }
    return 0;
}
