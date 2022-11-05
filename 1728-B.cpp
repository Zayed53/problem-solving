#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, i=1;
    cin>>n;
    if(n%2==0){
        for(int i=1;i<n-2;){
            cout<<i+1<<" "<<i<<" ";
            i=+2;
        }
        cout<<n-1<<" "<<n;
    }
    else{
        cout<<1<<" "<<3<<" "<<2<<" ";
        for(int i=4;i<n-2;){
            cout<<i+1<<" "<<i<<" ";
            i=+2;
        }cout<<n-1<<" "<<n;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
