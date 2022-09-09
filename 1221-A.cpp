#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n, s=0;
    vector<long long>vec;
    cin>>n;
    for(int i=0; i<n ; i++){
        long long in;
        cin>>in;
        vec.push_back(in);
    }
    for(auto &i: vec){
        if(i<=2048){
            s=s+i;
        }
    }if(s>=2048){
        cout<<"YES\n";
    }else
    {
        cout<<"NO\n";
    }
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        solve();
    }return 0;
}
