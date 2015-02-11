#include <vector>
#include <string.h>
#include <stdio.h>
using namespace std;
int minPathSum(vector<vector<int> > &grid) {
	
        int res[grid.size()][grid[0].size()];

        memset(res,0,sizeof(res));
	res[0][0]=grid[0][0];
        for(int i=1;i<grid.size();i++){

            res[i][0]=res[i-1][0]+grid[i][0];

        }

        for(int i=1;i<grid[0].size();i++){

            res[0][i]=res[0][i-1]+grid[0][i];

        }

        for(int i=1;i<grid.size();i++){

            for(int j=1;j<grid[0].size();j++){

                if(res[i-1][j]<res[i][j-1])res[i][j]=grid[i][j]+res[i-1][j];

                else res[i][j]=grid[i][j]+res[i][j-1];

            }

        }

        return res[grid.size()-1][grid[0].size()-1];

    }

int main(){
    vector<vector<int>> a;
    vector<int>temp;
    temp.push_back(0);
    a.push_back(temp);
    int result=minPathSum(a);
}
