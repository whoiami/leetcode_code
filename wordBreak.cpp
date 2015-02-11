#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

bool wordBreak(string s, unordered_set<string> &dict) {
        unordered_set<int> breakSet;
        breakSet.insert(-1);
        for (int i = 0; i < s.length(); i++) {
            for (unordered_set<int>::iterator it = breakSet.begin(); it != breakSet.end(); it++) {
                string str = s.substr(*it + 1, i - *it);
                if (dict.find(str) != dict.end()) {
                    breakSet.insert(i);
                    break;
                }
            }
        }
        return breakSet.find(s.length() - 1) != breakSet.end();
    }

int main(){
    string s="heisfine";
    unordered_set<string> dict={"he","is","fine"};
    bool res=wordBreak(s,dict);
    cout<<res;
}
