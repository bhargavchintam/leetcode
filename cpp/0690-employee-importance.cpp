#include<iostream>
#include<vector>
#include<unordered_map>
#include<functional>
using namespace std;
class Employee{public:
int id;
int importance;
vector<int>subordinates;
Employee(int i,int imp,vector<int>sub):id(i),importance(imp),subordinates(sub){}
};
class Solution{public:
int getImportance(vector<Employee*>employees,int id){
unordered_map<int,Employee*>mp;
for(auto*e:employees)mp[e->id]=e;
function<int(int)> dfs=[&](int i)->int{
Employee*e=mp[i];
int res=e->importance;
for(int s:e->subordinates)res+=dfs(s);
return res;
};
return dfs(id);
}
};
int main(){
vector<Employee*>employees;
employees.push_back(new Employee(1,5,{2,3}));
employees.push_back(new Employee(2,3,{}));
employees.push_back(new Employee(3,3,{}));
Solution sol;
cout<<sol.getImportance(employees,1)<<endl;
}
