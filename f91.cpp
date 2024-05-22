// https://br.spoj.com/problems/F91/

#include <bits/stdc++.h>
using namespace std;

int f91(int n) {
    
    if (n <= 100) {
        f91( f91 ( n + 11 ) );
    } else {
        return n - 10;
    }
    
}

int main() {
    
    int N;
    
    while (cin >> N) {
        cout << "f91(" << N << ") = " << f91(N) << "\n";
    }

}