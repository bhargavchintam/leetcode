#include<iostream>
#include<vector>
using namespace std;
class MyCalendar{public:
vector<pair<int,int>>events;
bool book(int start,int end){
for(auto&e:events){
if(start<e.second&&e.first<end)return false;
}
events.push_back({start,end});
return true;
}
};
int main(){
MyCalendar cal;
cout<<boolalpha<<cal.book(10,20)<<endl;
cout<<boolalpha<<cal.book(15,25)<<endl;
cout<<boolalpha<<cal.book(20,30)<<endl;
}
