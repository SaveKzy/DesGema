// https://cses.fi/problemset/task/1092/

#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int n, num, som = 0, s1 = 0, s2 = 0;
    
    set<int> set1, set2;
    
    cin >> n;
    
    if (n%2) num = n * ((n/2) + 1);
    else num = (n+1) * (n/2);

    if (num%2) cout << "NO\n";
    else {

        for (int i = 0; i < n; i++) {
            
            som += (i+1);
            
            set1.insert(i+1);
            
            if (som + n-i > num/2) {
                while (som + n-i > num/2) i++;
                som += n-i;
            } else {
                som += n-i;
            }
            
            set1.insert(n-i);
            
            if (som == num/2) break;
            
        }
        
        for (int i = 1; i <= n; i++) {
            
            if (!set1.count(i)) {
                s2 += i;
                set2.insert(i);
            } else {
                s1 += i;
            }
            
        }
        
        cout << "YES\n" << set1.size() << "\n";
        for (int val : set1) cout << val << " ";
        cout << "\n" << set2.size() << "\n";
        for (int val : set2) cout << val << " ";
        
    }
}