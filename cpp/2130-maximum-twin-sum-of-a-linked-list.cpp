#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(nullptr){}
};
class Solution{
public:
    int pairSum(ListNode* head){
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        int n=v.size();
        int res=0;
        for(int i=0;i<n/2;i++)res=max(res,v[i]+v[n-1-i]);
        return res;
    }
};
int main(){
    ListNode* head=new ListNode(5);
    head->next=new ListNode(4);
    head->next->next=new ListNode(2);
    head->next->next->next=new ListNode(1);
    Solution sol;
    cout<<sol.pairSum(head)<<endl;
}
