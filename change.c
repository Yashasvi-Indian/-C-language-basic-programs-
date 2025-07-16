#include<stdio.h>
#include<strings.h>
int main(){
char str[]="colid";
char *p =str;
*p='s';
printf("%s" ,str);


return 0;
}