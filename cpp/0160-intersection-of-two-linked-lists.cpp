#include <iostream>
using namespace std;
struct ListNode{int val;ListNode*next;ListNode(int x):val(x),next(nullptr){}};
class Solution{
public:
    ListNode* getIntersectionNode(ListNode*headA,ListNode*headB){
        ListNode*a=headA,*b=headB;
        while(a!=b){
            a=a?a->next:headB;
            b=b?b->next:headA;
        }
        return a;
    }
};
int main(){
    ListNode*c1=new ListNode(8);
    ListNode*c2=new ListNode(4);
    ListNode*c3=new ListNode(5);
    c1->next=c2;c2->next=c3;
    ListNode*a1=new ListNode(4);
    ListNode*a2=new ListNode(1);
    a1->next=a2;a2->next=c1;
    ListNode*b1=new ListNode(5);
    ListNode*b2=new ListNode(6);
    ListNode*b3=new ListNode(1);
    b1->next=b2;b2->next=b3;b3->next=c1;
    Solution sol;
    ListNode*res=sol.getIntersectionNode(a1,b1);
    cout<<(res?res->val:-1)<<endl;
}
