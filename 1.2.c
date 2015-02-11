#include <stdio.h>
#include <string.h>

void reverse(char* str){
    int index=strlen(str);
    int beginner,ender,i;
    char tmp;
    beginner=0;
    ender=index-1;
    	while(beginner!=ender&&(beginner-1)!=ender){
    	    tmp=str[beginner];
	    str[beginner]=str[ender];
	    str[ender]=tmp;
	    beginner++;ender--;
    	}
}

void main(){
    char str[100]="123456\n";
    reverse(str);
    printf("%s",str);
}
