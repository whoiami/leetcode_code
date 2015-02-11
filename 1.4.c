#include <stdio.h>
#include <string.h>
void main(){
    char str[100]="a b c d";
    int i,counter=0,size;
    for(i=0;i<strlen(str);i++){
	if(str[i]==' ')counter++;
    }
    size=(int)strlen(str)+2*counter;
    //printf("%d",counter);
    str[size]='\0';
    for(i=strlen(str)-1;i>0;i--){
	if(str[i]==' '){
	    str[size-1]='0';
	    str[size-2]='2';
	    str[size-3]='$';
	    size=size-3;
	}
	else{
	    str[size-1]=str[i];
	    size--;
	}
    }
    printf("%s\n",str);
}
