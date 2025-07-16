#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello strings in c";
    printf("\n %s",str);
    printf("\n%20s",str);
    printf("\n%-20s",str);
    printf("\n%20.4s",str);
    printf("\n%-20.4s",str);

return 0;
} 