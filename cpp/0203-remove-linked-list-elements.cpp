#include <iostream>
using namespace std;
struct ListNode{int val;ListNode*next;ListNode(int x):val(x),next(nullptr){}};
class Solution{
public:
    ListNode* removeElements(ListNode*head,int val){
        ListNode dummy(0);
        dummy.next=head;
        ListNode*cur=&dummy;
        while(cur->next){
            if(cur->next->val==val)cur->next=cur->next->next;
            else cur=cur->next;
        }
        return dummy.next;
    }
};
int main(){
    int vals[]={1,2,6,3,4,5,6};
    ListNode*head=new ListNode(vals[0]);
    ListNode*cur=head;
    for(int i=1;i<7;i++){cur->next=new ListNode(vals[i]);cur=cur->next;}
    Solution sol;
    ListNode*res=sol.removeElements(head,6);
    while(res){cout<<res->val<<(res->next?",":"");res=res->next;}
    cout<<endl;
}
