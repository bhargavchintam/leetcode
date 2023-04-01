#include <iostream>
using namespace std;
struct ListNode{int val;ListNode*next;ListNode(int x):val(x),next(nullptr){}};
class Solution{
public:
    ListNode* detectCycle(ListNode*head){
        ListNode*slow=head,*fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                ListNode*p=head;
                while(p!=slow){p=p->next;slow=slow->next;}
                return p;
            }
        }
        return nullptr;
    }
};
int main(){
    ListNode*a=new ListNode(3);
    ListNode*b=new ListNode(2);
    ListNode*c=new ListNode(0);
    ListNode*d=new ListNode(-4);
    a->next=b;b->next=c;c->next=d;d->next=b;
    Solution sol;
    ListNode*res=sol.detectCycle(a);
    cout<<(res?res->val:-1)<<endl;
}
