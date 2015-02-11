#include <stdio.h>
#include <string.h>
void compress(char *str){
    int i,counter=1;
    char tmp=str[0],tmp2;
    char* pointer=&tmp;
    char* pointer2=&tmp2;
    char newstr[100]="";
    for(i=1;i<=strlen(str);i++){
	if(tmp==str[i]){
	    counter++;
	}
	else{
	    strncat(newstr,pointer,1);
	    tmp2=(char)(counter+48);
	    strncat(newstr,pointer2,1); 
	    tmp=str[i];
	    counter=1;
	}
    }
    printf("%s\n",newstr);
    if(strlen(newstr)<strlen(str)){strcpy(str,newstr);}
}

void main(){
    char str[100]="abbccccc";
    compress(str);
    printf("%s\n",str);	
}
