// https://br.spoj.com/problems/ACOES1MG/

#include <bits/stdc++.h>
using namespace std;

int inv(int n, int k) {
    
    if (n > k) {
        return inv(n/2,k) + inv(n - (n/2), k);
    } else {
        return 1;
    }

}

int main() {
    
    int N, K;
    
    while (cin >> N >> K && N != 0 && K != 0) {
        cout << inv(N, K) << "\n";
    }
    
}