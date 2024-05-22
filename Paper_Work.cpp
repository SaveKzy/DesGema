// https://codeforces.com/contest/250/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    int neg = 0, ent,i = 0;
    vector<int> vec;
    vec.push_back(0);
    while (n--) {
        cin >> ent;
        if (ent < 0) {
            if (neg == 2) {
                neg = 0;
                vec.push_back(0);
                i++;
            }
            neg++;
        }
        vec.at(i)++;
    }
    

    cout << vec.size() << '\n';
    for(int i = 0; i< vec.size(); i++){
        cout << vec.at(i) << " ";
    }

}