// https://neps.academy/br/exercise/1008

#include <bits/stdc++.h>
using namespace std;

int main(){

    int s, t, p; cin >> s >> t >> p;

    int saloes[202], ent;
    for (int i = 1; i <= s; i++) {
        cin >> ent;
        saloes[i] = ent;
    }

    vector<int> tuneis[20002];
    int ent1, ent2;
    while (t--) {
        cin >> ent1 >> ent2;
        if (saloes[ent1] > saloes[ent2]) {
            tuneis[ent1].push_back(ent2);
        } else {
            tuneis[ent2].push_back(ent1);
        }
    }

    int dist[202];
    queue<int> fila;
    for(int i=1;i<=s;i++) dist[i] = -1;
    dist[1] = 0;
    fila.push(1);

    int maior = 0;

    while(fila.size()){
        int at = fila.front(); fila.pop();
        for(int i = 0; i < tuneis[at].size();i++){
            int filho = tuneis[at][i];
            if(dist[filho] == -1){
                fila.push(filho); dist[filho] = dist[at]+1;
            }
            maior = max(maior, dist[at]);
        }
    }

    for (int i = 0; i < s; i++) {
        cout << dist[i] << " ";
    }

    cout << "at";

    return 0;

}
