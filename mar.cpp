// https://neps.academy/br/exercise/530

#include <bits/stdc++.h>
using namespace std;

int mar[100][100];

int main() {

    int N, xi, xf, yi, yf, out = 0, num;
    
    cin >> N;
    
    while(N--) {
        
        cin >> xi >> xf >> yi >> yf;
        
        for (int x = xi; x < xf; x++) {
            for (int y = yi; y < yf; y++) {
                if (!mar[x][y]) {
                    out++;
                } mar[x][y] = 1;
            }
        }
        
    }
    
    cout << out;
    
}