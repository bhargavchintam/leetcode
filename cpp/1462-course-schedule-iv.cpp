#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    vector<bool> checkIfPrerequisite(int numCourses,vector<vector<int>>& prerequisites,vector<vector<int>>& queries){
        vector<vector<bool>> reach(numCourses,vector<bool>(numCourses,false));
        for(auto&p:prerequisites)reach[p[0]][p[1]]=true;
        for(int k=0;k<numCourses;k++)
            for(int i=0;i<numCourses;i++)
                if(reach[i][k])
                    for(int j=0;j<numCourses;j++)
                        if(reach[k][j])reach[i][j]=true;
        vector<bool> res;
        for(auto&q:queries)res.push_back(reach[q[0]][q[1]]);
        return res;
    }
};
int main(){
    vector<vector<int>> pre={{1,0}};
    vector<vector<int>> q={{0,1},{1,0}};
    Solution s;
    auto r=s.checkIfPrerequisite(2,pre,q);
    for(bool b:r)cout<<(b?"true":"false")<<" ";
    cout<<endl;
}
