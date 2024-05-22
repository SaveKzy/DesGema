// https://codeforces.com/contest/1925/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t, n, k, m, f;
    string s;
    vector<int> v;
    
    cin >> t;
    
    while(t--) {
        f = 0;
        v.clear();
        cin >> n >> k >> m >> s;
        for (int i = 0; i < k; i++) {
            v.push_back(n);
        }
        for (int j = 0; j < m; j++) {
            v.at((s[j] - 'a'))--;
        }
        for (int i = 0; i < k; i++) {
            if (v.at(i)) f = i+1;
        }
        if (f) {
            cout << "NO\n";
            while (n--) cout << char('a'+f-1);
            cout << '\n';
        } else {
            cout << "YES\n";
        }
    }
    
}