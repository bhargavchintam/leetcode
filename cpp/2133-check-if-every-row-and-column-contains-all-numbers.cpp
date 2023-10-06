#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    bool checkValid(vector<vector<int>>& matrix){
        int n=matrix.size();
        for(int i=0;i<n;i++){
            vector<bool> rowSeen(n+1,false),colSeen(n+1,false);
            for(int j=0;j<n;j++){
                if(rowSeen[matrix[i][j]])return false;
                rowSeen[matrix[i][j]]=true;
                if(colSeen[matrix[j][i]])return false;
                colSeen[matrix[j][i]]=true;
            }
        }
        return true;
    }
};
int main(){
    Solution sol;
    vector<vector<int>> matrix={{1,2,3},{3,1,2},{2,3,1}};
    cout<<(sol.checkValid(matrix)?"true":"false")<<endl;
}
