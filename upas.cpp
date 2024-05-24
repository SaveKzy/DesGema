#include <bits/stdc++.h>
using namespace std;

bool countains(vector<int> n, int val) {
    for (int i = 0; i < n.size(); i++) if (n[i] == val) return true;
    return false;
}

int maxn = 10E5 + 2;

int main() {

    int n, m; cin >> n >> m;

    vector<int> grafo[maxn];
    
    int ent1, ent2;
    while (m--) {
        cin >> ent1 >> ent2;
        grafo[max(ent1, ent2)].push_back(min(ent1, ent2));
    }

    pair<int, int> valores[maxn];
    valores[1] = {2, 1};
    int max = 2, max_index = 1, j;

    for (int i = 2; i <= n; i++) {
        j = i;
        while (j) {
            j--;
            if (!countains(grafo[i], j)) {
                valores[i] = {pow(2,i) + valores[j].first, j};
                if (max < valores[i].first) {
                    max = valores[i].first;
                    max_index = i;
                }
            }
        }
    }

    cout << max_index;

}
