// https://judge.beecrowd.com/en/problems/view/1180

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, x, menor, posicao;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        
        cin >> x;
        
        if (i == 0) {
            menor = x;
        } else if (x < menor){
            menor = x;
            posicao = i;
        }
        
    }

    cout << "Menor valor: " << menor << "\nPosicao: " << posicao;

}