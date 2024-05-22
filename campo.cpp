// https://neps.academy/br/course/programacao-basica-(codcad)/lesson/campo-minado

#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, ent, linha[50];
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> ent;
        linha[i] = ent;
    }
    
    for (int i = 0; i < N; i++) {
        
        if (i == 0) {
            cout << linha[0] + linha[1] << "\n";
        } else if (i == N-1) {
            cout << linha[i-1] + linha[i] << "\n";
        } else {
            cout << linha[i-1] + linha[i] + linha[i+1] << "\n";
        }
        
    }

}