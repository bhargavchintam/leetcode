#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
class Solution{
public:
    double maxProbability(int n,vector<vector<int>>& edges,vector<double>& succProb,int start,int end){
        vector<vector<pair<int,double>>> g(n);
        for(int i=0;i<(int)edges.size();i++){
            int a=edges[i][0],b=edges[i][1];
            g[a].push_back({b,succProb[i]});
            g[b].push_back({a,succProb[i]});
        }
        vector<double> prob(n,0.0);
        prob[start]=1.0;
        priority_queue<pair<double,int>> pq;
        pq.push({1.0,start});
        while(!pq.empty()){
            auto pr=pq.top();pq.pop();
            double p=pr.first;
            int u=pr.second;
            if(p<prob[u])continue;
            for(auto&e:g[u]){
                int v=e.first;
                double w=e.second;
                if(prob[u]*w>prob[v]){
                    prob[v]=prob[u]*w;
                    pq.push({prob[v],v});
                }
            }
        }
        return prob[end];
    }
};
int main(){
    vector<vector<int>> e={{0,1},{1,2},{0,2}};
    vector<double> p={0.5,0.5,0.2};
    Solution s;
    cout<<s.maxProbability(3,e,p,0,2)<<endl;
}
