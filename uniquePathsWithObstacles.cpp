#include <vector>
#include <string.h>

using namespace std;

int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {

        int m=obstacleGrid.size();

        int n=obstacleGrid[0].size();

        if(obstacleGrid[0][0]==1)return 0;

        int res[m][n];

        memset(res,0,sizeof(res));

        res[0][0]=1;

        for(int i=1;i<n;i++){

            if(obstacleGrid[0][i]!=1)res[0][i]=1;

        }

        for(int i=1;i<m;i++){

           if(obstacleGrid[0][i]!=1)res[i][0]=1;

        }

        for(int i=1;i<m;i++){

            for(int j=1;j<n;j++){

                if(obstacleGrid[i][j]==1)res[i][j]=0;

                else res[i][j]=res[i-1][j]+res[i][j-1];

            }

        }

        return res[m-1][n-1];

    }

int main(){
    vector<vector<int>> a;
    vector<int>tmp1,tmp2;
    tmp1.push_back(0);
    tmp2.push_back(1);
    a.push_back(tmp1);
    a.push_back(tmp2);
    uniquePathsWithObstacles(a);
}
