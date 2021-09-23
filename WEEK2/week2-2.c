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
       int c=0;
       printf("Enter the elements of Array\n");
       for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
       for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
           for(int k=j+1;k<n;k++){
              if(a[i]+a[j]==a[k]){
                printf("Indices are=%d,%d,%d",i+1,j+1,k+1);
                 c++;
                 break;

              }
            }
            if(c==1)
                break;
          }
          if(c==1)
            break;
       }
       if(c==0)
         printf("No sequence found\n");

    }
            return 0;
            }
