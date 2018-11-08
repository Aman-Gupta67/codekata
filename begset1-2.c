#include<stdio.h>
void main(){
    char cha;
    printf("Enter a character:");
    scanf("%c",&cha);
    if ((cha>='a'&&cha<='z')||(cha>='A'&&cha<='Z')){
    printf("alphabet");}
    else{printf("no");}
}
