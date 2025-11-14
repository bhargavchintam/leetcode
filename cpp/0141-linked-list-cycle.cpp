#include <iostream>
using namespace std;
struct ListNode{int val;ListNode*next;ListNode(int x):val(x),next(nullptr){}};
class Solution{
public:
    bool hasCycle(ListNode*head){
        ListNode*slow=head,*fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
        }
        return false;
    }
};
int main(){
    ListNode*a=new ListNode(3);
    ListNode*b=new ListNode(2);
    ListNode*c=new ListNode(0);
    ListNode*d=new ListNode(-4);
    a->next=b;b->next=c;c->next=d;d->next=b;
    Solution sol;
    cout<<(sol.hasCycle(a)?"true":"false")<<endl;
}
