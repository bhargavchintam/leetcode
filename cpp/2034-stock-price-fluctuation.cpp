#include<map>
#include<set>
#include<iostream>
using namespace std;

class StockPrice {
public:
    map<int,int> ts;
    multiset<int> prices;
    int latestTime = 0;

    StockPrice() {}

    void update(int timestamp, int price) {
        if (ts.count(timestamp)) {
            auto it = prices.find(ts[timestamp]);
            prices.erase(it);
        }
        ts[timestamp] = price;
        prices.insert(price);
        latestTime = max(latestTime, timestamp);
    }

    int current() {
        return ts[latestTime];
    }

    int maximum() {
        return *prices.rbegin();
    }

    int minimum() {
        return *prices.begin();
    }
};

int main() {
    StockPrice sp;
    sp.update(1, 10);
    sp.update(2, 5);
    cout << sp.current() << endl;
    cout << sp.maximum() << endl;
    sp.update(1, 3);
    cout << sp.maximum() << endl;
    sp.update(4, 2);
    cout << sp.minimum() << endl;
    sp.update(5, 10);
    cout << sp.current() << endl;
}
