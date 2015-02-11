#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void permutation(char *s, char* t){
    int letters[256],i,tmp;
    memset(letters,0,sizeof(letters));
    if (strlen(s)!=strlen(t)){printf("wrong1\n");exit(0);}
    for(i=0;i<strlen(s);i++){
	tmp=(int)s[i];
	letters[tmp]++;
    }
    for(i=0;i<strlen(t);i++){
	tmp=(int)t[i];
	letters[tmp]--;
	if(letters[tmp]<0){printf("wrong2\n");exit(0);}
    }
    printf("pass\n");
}

void main(){
    char s[100]="abc1:w";
    char t[200]="bac:ww";
    permutation(s,t);
}
