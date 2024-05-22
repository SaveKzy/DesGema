// https://neps.academy/br/exercise/261

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m; cin >> n >> m;
    set<int> st;
    map<int, int> mp;
    int ent, max;
    set<int>::iterator at;
    for (int i = 0; i < n-1; i++) {
        cin >> ent;
        st.insert(ent);
    }
    for (int i = 0; i < n-1; i++) {
        cin >> ent;
        at = st.begin();
        for (int j = 0; j < i; j++) at++;
        mp[*at] = ent;
    }
    cin >> max;
    
    for (int i = 0; i < m; i++) {

        if (i) cout << " ";

        cin >> ent;

        at = st.upper_bound(ent);

        if (at != st.end()) {
            cout << mp[*at];
        } else {
            cout << max;
        }

    }

}