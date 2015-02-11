#include <string>
using namespace std;

string multiply(string num1, string num2) {

        if(num1=="0"||num2=="0")return "0";

        string res(num1+num2);
	for(int i=0;i<num1.size()+num2.size();i++)res[i]='0';
        string tmp(num1);

        tmp.resize(num1.size()+1);

        int cout=0;

        for(int i=num2.size()-1;i>=0;i--){

            for(int j=num1.size()-1;j>=0;j--){

                tmp[j+1]=((int)(num1[j]-'0')*(int)(num2[i]-'0')+cout)%10+'0';

                cout=((int)(num1[j]-'0')*(int)(num2[i]-'0')+cout)/10;

            }

            if(cout!=0)tmp[0]=cout+'0';

            else tmp[0]='0';

            cout=0;

            for(int j=num1.size();j>=0;j--){
		int tmp1=res[i+j]-'0';

                res[i+j]=(res[i+j]-'0'+tmp[j]-'0'+cout)%10+'0';

                cout=(tmp1+tmp[j]-'0'+cout)/10;

            }

            cout=0;

            tmp.erase(tmp.begin(),tmp.end());

        }
	if(res[0]=='0')res.erase(res.begin());
	return res;

    }

int main(){
    string num1="123";
    string num2="456";
    multiply(num1,num2);
}
