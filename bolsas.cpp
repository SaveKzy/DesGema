// https://neps.academy/br/exercise/250

#include <bits/stdc++.h>
using namespace std;

bool compair(pair<int, int> a, pair<int, int> b) {

    return a.second < b.second;

}

int main() {

    int n; cin >> n;
    vector<pair<int, int> > vec; 

    while (n--) {
        
        int t, d; cin >> t >> d;
        vec.push_back({t,d});

    }

    sort(vec.begin(), vec.end(), compair);

    int tempo = 0, atraso = 0;

    for(int i = 0; i < vec.size(); i++){
        tempo += vec.at(i).first;
        atraso = max(atraso, (tempo - vec.at(i).second));
    }


    cout << atraso << '\n';
}