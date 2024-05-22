// https://cses.fi/problemset/task/1163/
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, n, ent, maior = 0;
    vector<int> p;
    
    cin >> n >> x;
    
    p.push_back(0);
    p.push_back(n);
    
    for (int i = 0; i < x; i++) {
        maior = 0;
        
        cin >> ent;
        p.push_back(ent);
        sort(p.begin(),p.end());
        
        for (int j = 0; j < p.size()-1; j++) {
            maior = max(maior, p.at(j+1)-p.at(j));
        }
        
        cout << maior;
        
        if (i!=x-1) cout << " ";
    }
}
