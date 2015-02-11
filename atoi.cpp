#include <stdio.h>
#include <string.h>
using namespace std;
#define INT_MAX 2147483647
#define INT_MIN -2147483648
int atoi(const char *str) {

        int i,result=0,flag=0,polar=1,time=0;

        for(i=0;i<strlen(str);i++){

            if(str[i]==' '&&flag==0)continue;

            if((str[i]-'0')>=0&&(str[i]-'0')<=9){

                flag=1;

                if(i>0&&str[i-1]=='-')polar=0;

                result=result*10+(str[i]-'0');
 		if(polar==1&&result<0)return INT_MAX;
		if(polar==0&&result<0)return INT_MIN;

                continue;

            }

            if((str[i]=='+'||str[i]=='-')&&time==0){time=1;continue;}

            else break;

        }

        if(flag==1&&polar==1&&result<0)return INT_MAX;

        if(flag==1&&polar==0&&result>0)return INT_MIN;

        if(flag==1&&polar==1)return result;

        if(flag==1&&polar==0)return -result;

        return 0;

    }
int main(){
    char str[]="   10522545459";
    atoi(str);
}
