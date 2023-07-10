#include <iostream>
#include <algorithm>
using namespace std;
class Solution{
public:
    bool checkOverlap(int radius,int xCenter,int yCenter,int x1,int y1,int x2,int y2){
        int cx=max(x1,min(xCenter,x2));
        int cy=max(y1,min(yCenter,y2));
        long dx=cx-xCenter,dy=cy-yCenter;
        return dx*dx+dy*dy<=(long)radius*radius;
    }
};
int main(){
    Solution s;
    cout<<(s.checkOverlap(1,0,0,1,-1,3,1)?"true":"false")<<endl;
}
