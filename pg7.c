#include<stdio.h>
#include<strings.h>
int main(){
    char str[80];
    printf("enter the string: ");
   // scanf("%d", &str);
    fgets(str,sizeof(str),stdin );
    printf("you entered: ");
    puts(str);
    
    return 0;
}