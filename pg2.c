#include<stdio.h>
#include<string.h>
int main(){
    char str[]="YASHASVI";
    int i,j,len;
    len=strlen(str);
    for(i= 0 ;i<=5 ;i++){
        for(j=0;j<=i;j++){
            printf("%c",str[j]);

        }    

    if (i==4){       
         printf("\n the user name for you :%.*s",i+1,str );

        break;}
       else
        printf("\noops! this user name already exists in the sofware\n");
    }


        printf("\n");
    return 0;
}