#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

string fractionToDecimal(int numerator, int denominator) {

        string res="";

        double result;

        if(numerator<0&&denominator>0||numerator>0&&denominator<0)res+='-';

        long long n=numerator,d=denominator;

        res+=std::to_string(int(n/d));

        if(numerator%denominator==0)return res;

        return res;

    }
int main(){
    fractionToDecimal(-2147483648,-1);
}
