#include<stdio.h>
void main(){
    int y,sum=0;
    printf("Enter a number of times:");
    scanf("%d ",&y);
        for (int i=1; i<=y;i++){
            sum=sum+i;
            
        }
        printf("%d",sum);
   
}
