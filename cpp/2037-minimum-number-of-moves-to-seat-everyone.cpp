#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int moves = 0;
        for (int i = 0; i < (int)seats.size(); i++) moves += abs(seats[i] - students[i]);
        return moves;
    }
};

int main() {
    vector<int> seats = {3,1,5}, students = {2,7,4};
    Solution sol;
    cout << sol.minMovesToSeat(seats, students) << endl;
}
