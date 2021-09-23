#include<stdio.h>
int main(){
    int t;
    printf("Enter number of testcases:");
    scanf("%d",&t);
    while(t--){
    int n;
        printf("Enter the limit of array:");
        scanf("%d",&n);
    int a[n];
     printf("Enter the elements of Array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter Key element\n:");
    int key;scanf("%d",&key);
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]-a[j]==key || a[j]-a[i]==key)
                c++;
        }
    }
    printf("%d",c);
}
return 0;
}
