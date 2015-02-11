#include <stdio.h>
#include <string.h>
int isSubstring(char *str1,char *str2){
    char str[100]="";
    char *result;
    strcat(str,str1);
    strcat(str,str1);
    //printf("%s",str);
    result=strstr(str,str2);
    if(result==NULL)return 0;
    else return 1;
}

void main(){
    char str1[]="waterbottle";
    char str2[]="erbottlewa1:";
    printf("%d\n",isSubstring(str1,str2));
}
