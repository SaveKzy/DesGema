// https://codeforces.com/contest/84/problem/B

#include <bits/stdc++.h>
using namespace std;

int funcao(int n) {
    int res = 0;
    while(n--) {
        res+=n;
    } return res;
}

int main() {

    int n; cin >> n;
    vector<int> vec;

    int ent;
    for (int i = 0; i < n; i++) {
        cin >> ent;
        vec.push_back(ent);
    }

    int i = 0, j = 0, out = 0;

    while (i < n) {
        if (vec[i] == vec[j] && j < n) {
            j++;
        } else {
            out += funcao(j-i+1);
            i=j;
        }

    }

    cout << out;

}