// https://neps.academy/br/exercise/198

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int ent, mat[3][3], linha1 = 0, linha2, coluna1 = 0,coluna2;
    
    for (int i = 0; i < 9; i++) {
        cin >> ent;
        
        mat[i%3][i/3] = ent;
    }
    
    bool linha, coluna, diagonal;
    
    linha = (mat[0][0] + mat[0][1] + mat[0][2]) == (mat[1][0] + mat[1][1] + mat[1][2]) && ((mat[0][0] + mat[0][1] + mat[0][2]) == mat[2][0] + mat[2][1] + mat[2][2]);
    
    coluna = (mat[0][0] + mat[1][0] + mat[2][0]) == (mat[0][1] + mat[1][1] + mat[2][1]) && (mat[0][0] + mat[1][0] + mat[2][0]) == (mat[0][2] + mat[1][2] + mat[2][2]);
    
    diagonal= (mat[0][0] + mat[1][1] + mat[2][2]) == (mat[0][2] + mat[1][1] + mat[2][0]);
    
    if (linha && coluna && diagonal) {
        cout << "SIM";
    } else {
        cout << "NAO";
    }

}