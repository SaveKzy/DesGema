#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, x, a;
    
    set<int> set;
    
    map<int, int> map;
    
    string s = "IMPOSSIBLE";
    
    cin >> n >> x;
    
    for (int i = 0; i < n; i++) {
        
        cin >> a;
        
        if (set.count(x-a)) {
            s = to_string(map[x-a]) + " " + to_string(i+1);
            break;
        }
        
        set.insert(a);
        map[a] = i+1;
        
    }
    
    cout << s;
    
}