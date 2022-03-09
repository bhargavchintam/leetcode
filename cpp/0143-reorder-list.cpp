#include <iostream>
using namespace std;
struct ListNode{int val;ListNode*next;ListNode(int x):val(x),next(nullptr){}};
class Solution{
public:
    void reorderList(ListNode*head){
        if(!head||!head->next)return;
        ListNode*slow=head,*fast=head;
        while(fast->next&&fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*second=slow->next;
        slow->next=nullptr;
        ListNode*prev=nullptr;
        while(second){
            ListNode*nxt=second->next;
            second->next=prev;
            prev=second;
            second=nxt;
        }
        ListNode*first=head;
        second=prev;
        while(second){
            ListNode*n1=first->next;
            ListNode*n2=second->next;
            first->next=second;
            second->next=n1;
            first=n1;
            second=n2;
        }
    }
};
int main(){
    ListNode*a=new ListNode(1);
    ListNode*b=new ListNode(2);
    ListNode*c=new ListNode(3);
    ListNode*d=new ListNode(4);
    a->next=b;b->next=c;c->next=d;
    Solution sol;
    sol.reorderList(a);
    ListNode*cur=a;
    while(cur){cout<<cur->val<<(cur->next?",":"");cur=cur->next;}
    cout<<endl;
}
