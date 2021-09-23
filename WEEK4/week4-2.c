#include<stdio.h>
void quick_sort(int *a,int l,int r);
int partition(int *a,int l,int r);
int s,c;

int partition(int *a,int l,int r){
    int p = a[r];
    int i = l-1;
    for(int j=l;j<r;j++){
        if(++c&&a[j]<p){
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            s++;
        }
    }
    a[r] =a[i+1];
    a[i+1] = p;
    s++;
    return (i+1);
}

void quick_sort(int *a,int l,int r){
    if(l<r){
        int p = partition(a,l,r);
        quick_sort(a,l,p-1);
        quick_sort(a,p+1,r);
    }
}
int main()
{
    int t;
    printf("Enter number of testcases:");
    scanf("%d",&t);
    while(t--){
        c=0,s=0;
        int n;
        printf("enter the limit of array:");
        scanf("%d",&n);
        int a[n];
        printf("enter the element of array:");
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        quick_sort(a,0,n-1);
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\nComparison: %d",c);
        printf("\nSwaps: %d\n\n\n",s);
    }
    return 0;
}
