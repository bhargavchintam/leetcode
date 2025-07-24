#include <iostream>
using namespace std;
struct ListNode{int val;ListNode*next;ListNode(int x):val(x),next(nullptr){}};
class Solution{
public:
    ListNode* merge(ListNode*a,ListNode*b){
        ListNode dummy(0);
        ListNode*tail=&dummy;
        while(a&&b){
            if(a->val<=b->val){tail->next=a;a=a->next;}
            else{tail->next=b;b=b->next;}
            tail=tail->next;
        }
        tail->next=a?a:b;
        return dummy.next;
    }
    ListNode* sortList(ListNode*head){
        if(!head||!head->next)return head;
        ListNode*slow=head,*fast=head->next;
        while(fast&&fast->next){slow=slow->next;fast=fast->next->next;}
        ListNode*mid=slow->next;
        slow->next=nullptr;
        ListNode*l=sortList(head);
        ListNode*r=sortList(mid);
        return merge(l,r);
    }
};
int main(){
    ListNode*a=new ListNode(4);
    ListNode*b=new ListNode(2);
    ListNode*c=new ListNode(1);
    ListNode*d=new ListNode(3);
    a->next=b;b->next=c;c->next=d;
    Solution sol;
    ListNode*res=sol.sortList(a);
    while(res){cout<<res->val<<(res->next?",":"");res=res->next;}
    cout<<endl;
}
