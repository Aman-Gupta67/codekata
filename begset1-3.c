#include<stdio.h>
void main(){
    char cha;
    printf("Enter a character:");
    scanf("%c",&cha);
    if ((cha>='a'&&cha<='z')||(cha>='A'&&cha<='Z')){
    if(cha=='a'||cha=='e'||cha=='i'||cha=='o'||cha=='u'||cha=='A'||cha=='E'||cha=='I'||cha=='O'||cha=='U')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    
    }}
    else{printf("invalid");}
}
