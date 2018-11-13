#include<stdio.h>
void main(){
int a,i,flag=0;
printf("Enter number:");
scanf("%d",&a);

for (i=2;i<a/2;i++){
    if(a%i==0){
    flag=1;
    break;
    }
}
if (a==1){
    printf("1 is not a prime number");
}
else{
    if(flag==0)
        printf("Prime");
    else
    printf("Not Prime");
}
}
