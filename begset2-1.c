#include<stdio.h>
void main(){
int a,i,c=1;
printf("Enter number and its power:");
scanf("%d %d",&a,&i);
for(int y=1;y<=i;y++){
    c=c*a;
}
printf("%d",c);
}
