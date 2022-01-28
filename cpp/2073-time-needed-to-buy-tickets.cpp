#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0, n = tickets.size();
        for (int i = 0; i < n; i++) {
            if (i <= k) time += min(tickets[i], tickets[k]);
            else time += min(tickets[i], tickets[k] - 1);
        }
        return time;
    }
};
int main() {
    Solution sol;
    vector<int> tickets = {2, 3, 2};
    cout << sol.timeRequiredToBuy(tickets, 2) << endl;
}
