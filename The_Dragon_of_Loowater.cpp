// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2267

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m; cin >> n >> m;
    vector<int> cab, alt;
    
    int ent, dindin;
    while (n+m) {

        if (n > m) cout << "Loowater is doomed!\n";
        else {

            while(n--) {
                cin >> ent;
                cab.push_back(ent);
            }
            
            while (m--) {
                cin >> ent;
                alt.push_back(ent);
            }
            
            sort(cab.begin(), cab.end());
            sort(alt.begin(), alt.end());

            dindin = 0;
            int j = 0;
            while(cab.size()){
                if(alt.at(j) >= cab.at(0)) {
                    dindin+=alt.at(j);
                    cab.erase(cab.begin());
                }
                j++;
            }
            if (!cab.size()) cout << dindin << '\n';
            else cout << "Loowater is doomed!\n";

            cab.empty(); alt.empty();
        }

        cin >> n >> m;
    }

}