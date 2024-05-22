// https://cses.fi/problemset/task/1091/
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m, ent;
    
    multiset<int> h;
    multiset<int>::iterator it;
    
    cin >> n >> m;
    
    while(n--) {
        cin >> ent;
        h.insert(ent);
    }
    
    while (m--) {
        cin >> ent;
    
        it = h.lower_bound(ent);
        
        if (*it != ent) it--;

        if (it == h.end()) {
            cout << "-1\n";
        } else {
            cout << *it << "\n";
            h.erase(it);   
        }
    }
    
    
}
