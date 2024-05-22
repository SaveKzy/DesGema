#include <bits/stdc++.h>
using namespace std;

bool cpm(pair<int, int> a, pair<int, int>b){
    return a.second < b.second;
}

int main(int argc, char const *argv[]){

    int n;cin >> n;

    vector< pair<int, int> > tasks;

    int a,b;
    for(int i;i<n;i++){
        cin >> a >>b;
        tasks.push_back({a, b});
    }

    //sort(tasks.begin(), tasks.end(), cpm);


    int t_atual=0, resp=0;
    for(int i=0;i<n;i++){
        if(tasks[i].first >= t_atual){
            cout << tasks[i].first << tasks[i].second << endl;
            t_atual = tasks[i].second;
            resp++;
        }
    }

    cout << resp << endl;


    for(int i=0;i<n;i++){
        cout << tasks[i].first << " " << tasks[i].second;
    }
    
    return 0;
}
