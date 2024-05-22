#include <bits/stdc++.h>
using namespace std;

int maxn = 10e5 + 5;

int main() {
    
    int N, Q; cin >> N >> Q;
    int arr[maxn];
    
    int ini, fim, mid;
    bool out = true;
    
    for (int i = 1; i <= N; i++) {
        int a; cin >> a;
        arr[i] = a;
    }
    
    while (Q--) {
        
        ini = 0, fim = N, out = true;
        
        int a; cin >> a;
        
        while (ini <= fim) {
            
            mid = (ini + fim ) /2;
            if (arr[mid] == a) {
                
                if (arr[mid-1] == a) {
                    ini -= 1;
                } else {
                    cout << mid-1 << '\n';
                    out = false;
                    break;
                }
            }
            else if (arr[mid] > a) fim = mid - 1;
            else ini = mid + 1;
            
        }
        
        if (out) cout << -1 << '\n';
        
    }
}