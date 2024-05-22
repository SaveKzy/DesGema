// https://neps.academy/br/exercise/337

#include <bits/stdc++.h>
using namespace std;

int hanoi(int N, char Orig, char Dest, char Temp) {
    int qnt = 1;
    if (N == 1) {
        return qnt;
    } else {
        qnt += hanoi(N-1, Orig, Temp, Dest);
        qnt += hanoi(N-1, Temp, Dest, Orig);
    }
    return qnt;
}

int main() {
    int N,  i = 1;
    while (cin >> N && N != 0) {
        cout << "Teste " << i << "\n" << hanoi(N, 'A', 'C', 'B') << "\n";
        i++;
    }
}