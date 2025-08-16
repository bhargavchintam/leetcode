#include <iostream>
#include <stack>
using namespace std;
class MinStack{
public:
    stack<int> st;
    stack<int> mn;
    MinStack(){}
    void push(int val){
        st.push(val);
        if(mn.empty()||val<=mn.top())mn.push(val);
        else mn.push(mn.top());
    }
    void pop(){
        st.pop();
        mn.pop();
    }
    int top(){return st.top();}
    int getMin(){return mn.top();}
};
int main(){
    MinStack ms;
    ms.push(-2);ms.push(0);ms.push(-3);
    cout<<ms.getMin()<<" ";
    ms.pop();
    cout<<ms.top()<<" "<<ms.getMin()<<endl;
}
