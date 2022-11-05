#include <bits/stdc++.h>

using namespace std;

string solve(){
    int n, k;
    cin>>n>>k;
    vector<int> vec(n);

    for(auto &i : vec){
        cin>>i;
    }
    for(auto &i : vec){
        if(i==1){
            return "YES\n";
        }
    }
    return "NO\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve();
    }
    return 0;
}
