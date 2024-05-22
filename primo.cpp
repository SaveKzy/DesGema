// https://neps.academy/br/exercise/247

#include <bits/stdc++.h>
using namespace std;

bool primo(int n) {
    
    if (!n%2) {
        return false;
    } else if (n == 1) {
        return true;
    } else {
        return primo(n-2);
    }

}

int main() {
    
    
    int x;
    
    cin >> x;
    
    if (primo(x)) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
    
}