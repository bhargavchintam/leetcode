#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> parent;
    int find(int x){
        return parent[x]==x ? x : parent[x]=find(parent[x]);
    }
    void unite(int a, int b){
        a = find(a);
        b = find(b);
        if(a != b) parent[a] = b;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        parent.resize(n);
        for(int i=0;i<n;i++) parent[i]=i;
        for(auto &e : edges) unite(e[0], e[1]);
        return find(source) == find(destination);
    }
};

int main(){
    vector<vector<int>> edges = {{0,1},{1,2},{2,0}};
    Solution sol;
    bool res = sol.validPath(3, edges, 0, 2);
    cout << (res ? "true" : "false") << endl;
}
