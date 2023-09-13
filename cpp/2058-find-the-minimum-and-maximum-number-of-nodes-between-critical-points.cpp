#include<vector>
#include<iostream>
#include<climits>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int idx = 1;
        int firstIdx = -1, lastIdx = -1, minDist = INT_MAX;
        ListNode* prev = head;
        ListNode* cur = head->next;
        idx = 2;
        while (cur->next) {
            if ((cur->val > prev->val && cur->val > cur->next->val) ||
                (cur->val < prev->val && cur->val < cur->next->val)) {
                if (firstIdx == -1) firstIdx = idx;
                else minDist = min(minDist, idx - lastIdx);
                lastIdx = idx;
            }
            prev = cur;
            cur = cur->next;
            idx++;
        }
        if (firstIdx == -1 || firstIdx == lastIdx) return {-1, -1};
        return {minDist, lastIdx - firstIdx};
    }
};

ListNode* build(vector<int>& v) {
    ListNode* dummy = new ListNode(0);
    ListNode* t = dummy;
    for (int x : v) {
        t->next = new ListNode(x);
        t = t->next;
    }
    return dummy->next;
}

int main() {
    vector<int> v = {5,3,1,2,5,1,2};
    ListNode* head = build(v);
    Solution sol;
    vector<int> res = sol.nodesBetweenCriticalPoints(head);
    cout << "[" << res[0] << "," << res[1] << "]" << endl;
}
