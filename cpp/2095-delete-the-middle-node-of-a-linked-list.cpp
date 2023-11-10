#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head->next) return nullptr;
        ListNode *slow = head, *fast = head, *prev = nullptr;
        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = slow->next;
        return head;
    }
};
int main() {
    int vals[] = {1, 3, 4, 7, 1, 2, 6};
    ListNode* head = new ListNode(vals[0]);
    ListNode* tail = head;
    for (int i = 1; i < 7; i++) { tail->next = new ListNode(vals[i]); tail = tail->next; }
    Solution sol;
    ListNode* res = sol.deleteMiddle(head);
    for (ListNode* p = res; p; p = p->next) cout << p->val << " ";
    cout << endl;
}
