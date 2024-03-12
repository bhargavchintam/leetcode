#include<vector>
#include<map>
#include<unordered_map>
#include<iostream>
using namespace std;

class DetectSquares {
public:
    unordered_map<int, map<int,int>> pts;
    DetectSquares() {}
    void add(vector<int> point) {
        pts[point[0]][point[1]]++;
    }
    int count(vector<int> point) {
        int x = point[0], y = point[1];
        if(!pts.count(x)) return 0;
        int res = 0;
        for(auto &[y2, c2] : pts[x]){
            if(y2 == y) continue;
            int d = y2 - y;
            for(int x2 : {x-d, x+d}){
                if(pts.count(x2) && pts[x2].count(y) && pts[x2].count(y2)){
                    res += c2 * pts[x2][y] * pts[x2][y2];
                }
            }
        }
        return res;
    }
};

int main(){
    DetectSquares obj;
    obj.add({3,10});
    obj.add({11,2});
    obj.add({3,2});
    cout << obj.count({11,10}) << endl;
    cout << obj.count({14,8}) << endl;
    obj.add({11,2});
    cout << obj.count({11,10}) << endl;
}
