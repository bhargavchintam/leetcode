#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;
class Solution{
public:
    int minCostConnectPoints(vector<vector<int>>& points){
        int n=points.size();
        vector<int> dist(n,INT_MAX);
        vector<bool> vis(n,false);
        dist[0]=0;
        int total=0;
        for(int i=0;i<n;i++){
            int u=-1;
            for(int j=0;j<n;j++)
                if(!vis[j]&&(u==-1||dist[j]<dist[u]))u=j;
            vis[u]=true;
            total+=dist[u];
            for(int v=0;v<n;v++){
                if(!vis[v]){
                    int d=abs(points[u][0]-points[v][0])+abs(points[u][1]-points[v][1]);
                    dist[v]=min(dist[v],d);
                }
            }
        }
        return total;
    }
};
int main(){
    vector<vector<int>> p={{0,0},{2,2},{3,10},{5,2},{7,0}};
    Solution s;
    cout<<s.minCostConnectPoints(p)<<endl;
}
