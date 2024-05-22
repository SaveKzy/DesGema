// https://cses.fi/problemset/task/1621/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, ent;
    set<int> x;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> ent;
        x.insert(ent);
        
    }
    
    cout << x.size();

}