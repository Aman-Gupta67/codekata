#include<stdio.h>
void main(){
    int n,k,sum=0;
    int arr[n]; 
    printf("Enter two numbers:");
    scanf("%d %d",&n,&k);
        for (int i=0; i<n;i++)
            scanf("%d",&arr[i]);
            
            for (int i=0;i<k;i++)
            sum=sum+arr[i];
            
        
        printf("%d",sum);
   
}
