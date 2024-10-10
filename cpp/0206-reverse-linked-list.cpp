#include <iostream>
using namespace std;
struct ListNode{int val;ListNode*next;ListNode(int x):val(x),next(nullptr){}};
class Solution{
public:
    ListNode* reverseList(ListNode*head){
        ListNode*prev=nullptr;
        while(head){
            ListNode*nxt=head->next;
            head->next=prev;
            prev=head;
            head=nxt;
        }
        return prev;
    }
};
int main(){
    int vals[]={1,2,3,4,5};
    ListNode*head=new ListNode(vals[0]);
    ListNode*cur=head;
    for(int i=1;i<5;i++){cur->next=new ListNode(vals[i]);cur=cur->next;}
    Solution sol;
    ListNode*res=sol.reverseList(head);
    while(res){cout<<res->val<<(res->next?",":"");res=res->next;}
    cout<<endl;
}
