#include<stdio.h>
int main(){
    int t;
    printf("enter the no. of testcases:");
    scanf("%d",&t);
    while(t--){
        int n,i,s,c,flag=0;
        s=c=0;
        printf("enter the limit of array:");
        scanf("%d",&n);
        int a[n];
        printf("enter the element of array:");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<n;i++){
            int key=a[i];
            int j=i-1;
            while(j>=0&&key<a[j]){
                c++;
                s++;
                flag = 1;
                a[j+1]=a[j];
                j--;
            }
            if(j!=-1)
                c++;
            a[j+1]=key;
            if(flag==1){
                s++;
                flag = 0;
            }
        }
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\nComparisons: %d",c);
        printf("\nShift: %d\n\n",s);
    }
    return 0;
}
