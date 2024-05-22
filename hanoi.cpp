// https://neps.academy/br/exercise/337

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,  i = 1;
    while (cin >> N && N != 0) {
        cout << "Teste " << i << "\n" << pow(2, N) -1 << "\n";
        i++;
    }
}