#include<stdio.h>
void main(){
int a,temp,rev=0,n;
printf("Enter number:");
scanf("%d",&a);
n=a;
while (a!=0){
    temp=a%10;
    rev=rev*10+temp;
    a=a/10;
}
if (n==rev){
    printf("Palindrome");
}
else
printf("Not Palindrome");
}
