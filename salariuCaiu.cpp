// https://codeforces.com/contest/580/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, d; cin >> n >> d;
    map<int, int> mp;
    set<int> st;
    int m, s;
    while(n--) {
        cin >> m >> s;
        
        if (mp.count(m)) mp[m] += s;
        else mp[m] = s;

        st.insert(m);
    }

    set<int>::iterator i = st.begin(), j = st.begin();
    int mai = 0, qnt = 0;
    while (i != st.end()) {
        if (*j - *i <= d && j != st.end()) {
            qnt += mp[*j];
            j++;
        } else {
            qnt -= mp[*i];
            i++;
        }
        mai = max(qnt, mai);
        cout << qnt << " " << mai << endl;
    }

    cout << mai;

}