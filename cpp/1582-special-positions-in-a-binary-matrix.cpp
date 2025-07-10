#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int numSpecial(vector<vector<int>>& mat){
        int n=mat.size(),m=mat[0].size();
        vector<int> rowSum(n,0),colSum(m,0);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                rowSum[i]+=mat[i][j];
                colSum[j]+=mat[i][j];
            }
        int res=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(mat[i][j]==1&&rowSum[i]==1&&colSum[j]==1)res++;
        return res;
    }
};
int main(){
    vector<vector<int>> m={{1,0,0},{0,0,1},{1,0,0}};
    Solution s;
    cout<<s.numSpecial(m)<<endl;
}
