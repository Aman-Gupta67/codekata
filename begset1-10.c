#include<stdio.h>
void main(){
    int n,c=0;
    
    printf("Enter a numbers:");
    scanf("%d ",&n);
        while(n!=0){
           
            n=n/10;
            c++;
        }
            
        
        printf("%d",c);
   
}
