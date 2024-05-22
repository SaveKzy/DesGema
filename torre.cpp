// https://neps.academy/br/exercise/45

#include <bits/stdc++.h>
using namespace std;

int linha[1000], coluna[1000];

int main() {

    int N, tab[1000][1000], ent, maior = 0;
    
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> ent;
            
            tab[i][j] = ent;
            linha[i] += ent;
            coluna[j] += ent;
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            maior = max(maior, linha[i] + coluna[j] - (2*tab[i][j]));
        }
    }
    
    cout << maior;
    
}