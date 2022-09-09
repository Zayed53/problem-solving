#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, m, s=0;
    cin>>n>>m;
    vector<int> vec(n);
    for(auto &i:vec){
        cin>>i;
    }
    for(auto &i:vec){
        s=s+i;
    }if((s-m)>0){
        return s-m;
    }return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
