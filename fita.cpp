// https://neps.academy/br/course/programacao-basica-(codcad)/lesson/fita-colorida

#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, linha[1000], ent, resp[1000];
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        
        cin >> ent;
        
        linha[i] = ent;
        
    }
    
    int ant = -1, next = -1;
    
    for (int i = 0; i < N; i++) {
        
        if (linha[i]) {
            int j = i+1;
            while (true) {
                if (!linha[j]) {
                    next = j;
                    break;
                } else if (j == N) {
                    break;
                } else j++;
            }
            
            //cout << endl << ant << " = " << next << " = " << i << endl;
            
            if (ant == -1) cout << abs(next-i);
            else cout << min(abs(i-ant), abs(next-i));
            
        } else {
            ant = i;
            cout << 0;
        }
        
        if (i != N-1) {
            cout << " ";
        }
        
    }

}