#include <bits/stdc++.h>
using namespace std;
int main() {

    string s, o = "";
    char xaro = ' ';
    string xaro2="";
    bool f=true;
    map<char, int> mapa;
    
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        
        if (mapa.count(s[i]) > 0) {
            mapa.at(s[i])++;
        } else {
            mapa[s[i]] = 1;
        }
        
    }
    
    for (auto& x: mapa) {
        if(x.second%2){
            xaro = x.first;
            if(f){
                f=false;
            }else{
                cout << "NO SOLUTION";
                break;
            }
        } else {
            for (int i = 0; i < x.second/2; i++) {
                o = x.first + o + x.first;
            }
        }
    }
    xaro2+= xaro;
    
    if (xaro != ' ') {
        o.insert(o.size()/2,xaro2);
    }
    
    cout << o;   
}