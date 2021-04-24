#include<vector>
#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto &op : operations){
            if(op[1] == '+') x++;
            else x--;
        }
        return x;
    }
};

int main(){
    vector<string> operations = {"--X","X++","X++"};
    Solution sol;
    cout << sol.finalValueAfterOperations(operations) << endl;
}
