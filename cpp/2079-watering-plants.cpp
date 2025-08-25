#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int cur = capacity, steps = 0;
        for (int i = 0; i < n; i++) {
            if (cur >= plants[i]) { cur -= plants[i]; steps += 1; }
            else { steps += 2 * i + 1; cur = capacity - plants[i]; }
        }
        return steps;
    }
};
int main() {
    Solution sol;
    vector<int> plants = {2, 2, 3, 3};
    cout << sol.wateringPlants(plants, 5) << endl;
}
