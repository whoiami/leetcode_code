#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    char test[1000]="abcegredsew;roa";
    int result[256];
    memset(result,0,sizeof(result));
    int index;
    int tmp;
	
    if((int)strlen(test)>256)printf("wrong1!\n");
    for(index=0;index<strlen(test);index++){
	tmp=(int)test[index];
	if(result[tmp]==1){printf("wrong2!\n");exit(0);}
	result[tmp]=1;
    }
    printf("pass the test!!\n");
}
