// https://neps.academy/br/course/programacao-basica-(codcad)/lesson/codigo-(obi-2015)

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, seq[10000], qnt = 0;
    
    cin >> n;
    
    if (n >= 3) {
        
        cin >> seq[0] >> seq[1] >> seq[2];
        
        for (int i = 0; i < n-2; i++) {
        
            if (seq[0] == 1 && seq[1] == 0 && seq[2] == 0) {
                qnt++;
            }
        
            seq[0] = seq[1];
            seq[1] = seq[2];
            
            cin >> seq[2];
        
        }
        
    }
    
    cout << qnt;

}