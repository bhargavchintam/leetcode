#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <cctype>
using namespace std;
class Solution{
public:
    string reformatDate(string date){
        unordered_map<string,string> mp={
            {"Jan","01"},{"Feb","02"},{"Mar","03"},{"Apr","04"},
            {"May","05"},{"Jun","06"},{"Jul","07"},{"Aug","08"},
            {"Sep","09"},{"Oct","10"},{"Nov","11"},{"Dec","12"}
        };
        stringstream ss(date);
        string d,m,y;
        ss>>d>>m>>y;
        while(!isdigit(d.back()))d.pop_back();
        if(d.size()<2)d="0"+d;
        return y+"-"+mp[m]+"-"+d;
    }
};
int main(){
    Solution s;
    cout<<s.reformatDate("20th Oct 2052")<<endl;
}
