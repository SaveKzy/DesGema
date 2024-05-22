// https://neps.academy/br/exercise/278

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b, ent, outA = 0, outB = 0;
    set<int> x, y;
    set<int>::iterator it;
    
    cin >> a >> b;
 
    for (int i = 0; i < a; i++) {
        cin >> ent;
        x.insert(ent);
    }
    
    for (int i = 0; i < b; i++) {
        cin >> ent;
        y.insert(ent);
    }
    
    for (it = x.begin(); it != x.end(); it++) {
        if (y.count(*it) <= 0) {
            outA++;
        }
    }
    for (it = y.begin(); it != y.end(); it++) {
        if (x.count(*it) <= 0) {
            outB++;
        }
    }
    cout << min(outA, outB);
}