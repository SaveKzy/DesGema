// https://cses.fi/problemset/task/1640/

#include <bits/stdc++.h>
using namespace std;

int main() {

    map<int, int> map;
    int n, x, ent;
    bool f = 1;
    
    cin >> n >> x;
    
    for (int i = 1; i < n+1; i++) {
        cin >> ent;
        map[ent] = i;
        if (map.count(x-ent) > 0) {
            cout << map.find(x-ent)->second << " " << i;
            f = 0;
        }
    }
    if (f) cout << "IMPOSSIBLE";
}