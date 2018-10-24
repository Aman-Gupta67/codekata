#include<stdio.h>
void main(){
  
int a;
scanf("Enter a number %d",&a);
if (a%2==0){
  printf("Even Number");
}
  else if(a%2!=0){
    printf("Odd number");
  }
  else
    printf("Invalid input");
}
