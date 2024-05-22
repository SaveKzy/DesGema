// https://cses.fi/problemset/task/1073/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    bool abro=false;
    vector <int>v;
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>k;
        for(int j=0;j<v.size();j++){
            if(k<v.at(j)){
                v.at(j) =k;
                abro=true;
                break;
            }
        }
        if(!abro){
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        abro=false;    
    }
    cout << v.size();
}
