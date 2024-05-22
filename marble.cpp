#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, a[200000], b[200000], ent;
    int maior, index;
    long long int resp;
    cin >> t;
    while(t--) {
        resp = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ent;
            a[i] = ent;
        }
        for (int i = 0; i < n; i++) {
            cin >> ent;
            b[i] = ent;
        }
        
        for(int j=0;j<n;j++){
            maior=INT_MIN;
        
            for (int i = 0; i < n; i++) {
                    
                if (a[i] != 0 && b[i] != 0) {
                    if(!(j%2)){
                        
                        if(maior<b[i]-1+a[i]-1){
                            maior = b[i]-1+a[i]-1;
                            index = i;
                        } 
                    }
                    
                    if(j%2){
                        if(maior<a[i]-1+b[i]-1){
                            maior = a[i]-1+b[i]-1;
                            index = i;
                        }
                    }
                }
            }
            
            if (a[index] != 0 && b[index] != 0){
                //cout << index << ".\n";
                if(!(j%2)){
                    a[index]--;
                    b[index]=0;
                }
                if(j%2){
                    a[index] = 0;
                    b[index]--;
                }
            }
        }
        
        for(int i=0;i<n;i++) resp += a[i]-b[i];
        //for(int i=0;i<n;i++) cout << a[i] << " ";
        //cout<<"\n";
        //for(int i=0;i<n;i++) cout << b[i] << " ";
        cout << resp << "\n";
    }
    
}