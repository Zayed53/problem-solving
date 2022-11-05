#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, ans;
    cin>>n;
    if(n==1){
        cout<<1<<"\n"<<1<<" "<<2<<"\n";
        return ;
    }
    if(n%2==0){
        ans=n/2;
        cout<<ans<<"\n";
        for(int j=2, x=n*3;j<x;j=j+3,x=x-3){
            cout<<j<<" "<<x<<"\n";
        }
    }else{
        ans=(n/2)+1;
        cout<<ans<<"\n";
        for(int j=2, x=(n-1)*3;j<x;j=j+3, x=x-3){
            cout<<j<<" "<<x<<"\n";
        }
        cout<<((n/2)*3)+1<<" "<<n*3<<"\n";
    }


}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return  0;
}
