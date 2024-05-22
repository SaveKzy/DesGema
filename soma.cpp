// https://cses.fi/problemset/task/1640/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int n, x, a;
    
    set<long long int> set;
    
    map<long long int, int> map;
    
    string s = "IMPOSSIBLE";
    
    cin >> n >> x;
    
    for (int i = 0; i < n; i++) {
        
        cin >> a;
        
        if (!set.empty() && set.count(x-a)) {
            s = map.find(x-a)->second + " " + a;
        }
        
        map.insert( pair<int,int>(a,i+1) );
    }
    
    cout << s;
    
}