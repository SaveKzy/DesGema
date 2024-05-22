// https://cses.fi/problemset/task/1076/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k, ent, out = 0;
    
    vector<int> x;
    
    multiset<int> part;
    
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> ent;
        x.push_back(ent);
    }

    for (int i = 0; i < n-k+1; i++) {

        part.clear();
        
        for (int j = 0; j < k; j++) {
            
            part.insert(x[i+j]);
            
        }
        
        auto p = part.begin();
        advance(p, 1);
        
        cout << *p;
        
        if (i != n-k) {
            cout << " ";
        }
        
    }

}