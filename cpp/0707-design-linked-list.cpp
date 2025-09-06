#include<iostream>
using namespace std;
class MyLinkedList{public:
struct Node{
int val;
Node*next;
Node(int v):val(v),next(nullptr){}
};
Node*head=nullptr;
int sz=0;
int get(int index){
if(index<0||index>=sz)return -1;
Node*cur=head;
for(int i=0;i<index;i++)cur=cur->next;
return cur->val;
}
void addAtHead(int val){
addAtIndex(0,val);
}
void addAtTail(int val){
addAtIndex(sz,val);
}
void addAtIndex(int index,int val){
if(index>sz)return;
if(index<0)index=0;
Node*node=new Node(val);
if(index==0){
node->next=head;
head=node;
}else{
Node*cur=head;
for(int i=0;i<index-1;i++)cur=cur->next;
node->next=cur->next;
cur->next=node;
}
sz++;
}
void deleteAtIndex(int index){
if(index<0||index>=sz)return;
if(index==0){
Node*tmp=head;
head=head->next;
delete tmp;
}else{
Node*cur=head;
for(int i=0;i<index-1;i++)cur=cur->next;
Node*tmp=cur->next;
cur->next=tmp->next;
delete tmp;
}
sz--;
}
};
int main(){
MyLinkedList ll;
ll.addAtHead(1);
ll.addAtTail(3);
ll.addAtIndex(1,2);
cout<<ll.get(1)<<endl;
ll.deleteAtIndex(1);
cout<<ll.get(1)<<endl;
}
