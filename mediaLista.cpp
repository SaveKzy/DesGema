// https://cses.fi/problemset/task/1076/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k, ent, out = 0;
    
    vector<int> x;
    
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> ent;
        x.push_back(ent);
    }

    for (int i = 0; i < n; i++) {
        
        out += x[i];
        
        if (i >= k-1) {
            
            if (out % k > k / 2) {
                
                cout << "\n." << out << ".\n";
                
                cout << (out / k) + 1;
            } else {
                cout << out / k;
            }
            out -= x[i-k+1];
         
            if (i != n-1) {
                cout << " ";
            }
            
        }
        
    }

}