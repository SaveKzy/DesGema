// https://neps.academy/br/exercise/202

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int ent, mat[3][3], maior = 0;
    
    for (int i = 0; i < 9; i++) {
        
        cin >> ent;
        
        mat[i%3][i/3] = ent;
        
        maior = max(maior, ent);
        
    }
    
    
    for (int i = 0; i < 9; i++) {
        
        if (mat[i%3][i/3] == maior) {
            mat[i%3][i/3] = -1;
        }
     
        cout << mat[i%3][i/3];
        
        if (i%3 == 0 || i%3 == 1) {
            cout << " ";
        } else {
            cout << "\n";
        }
        
    }
}