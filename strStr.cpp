#include <stdio.h>

using namespace std;
int length(char *target){

        int i=0;

        if(target==NULL)return 0;

        while(*target!='\0'){

            i++;

            target++;

        }

        return i;

    }

    int strStr(char *haystack, char *needle) {

        int h=length(haystack);

        int n=length(needle);

        int flag=0;

        if(h==0&&n==0)return 0;

        if(n==0)return 0;

        if(h<n)return -1;

        int i=0,j=0,pos=0;

        while(i<h&&j<n){

            if(haystack[i]==needle[j]){

                i++;j++;
		if(flag==0){
                    flag=1;
		    pos=i;
		}

            }

            else {

                i++;

                if(flag==1){j=0;flag=0;i=pos;}

            }

        }

        if(i==h&&j==n)return h-n;

        if(j==n)return i-n;

        if(i==h)return -1;

    }
int main(){
    char a[]="mississippi";
    char b[]="issip";
    int result=strStr(a,b);
}
