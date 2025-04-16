#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    vector<vector<int>> generate(int numRows){
        vector<vector<int>> res(numRows);
        for(int i=0;i<numRows;i++){
            res[i].resize(i+1,1);
            for(int j=1;j<i;j++)
                res[i][j]=res[i-1][j-1]+res[i-1][j];
        }
        return res;
    }
};
int main(){
    Solution sol;
    auto res=sol.generate(5);
    for(auto&row:res){
        cout<<"[";
        for(int i=0;i<row.size();i++)cout<<row[i]<<(i+1<row.size()?",":"");
        cout<<"]";
    }
    cout<<endl;
}
