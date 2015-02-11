#include <string>
#include <vector>

using namespace std;

void dfs(string s,vector<string> possibleres,vector< vector<string> > res){

        if(s.size()<1){

            res.push_back(possibleres);

            return;

        }

        for(int i=0;i<s.size();i++){

            int begin=0;

            int end=i;

            while(begin<end&&s[begin]==s[end]){

                begin++;

                end--;

            }

            if(begin>=end){

                possibleres.push_back(s.substr(0,i+1));

                dfs(s.substr(i+1),possibleres,res);
		possibleres.pop_back();

            }

        }

    }

vector<vector<string>> partition(string s) {

        vector<string> possibleres;

        vector<vector<string>> res;

        dfs(s,possibleres,res);

        return res;

    }

int main(){
    vector<vector<string>> res=partition("bb");
}
