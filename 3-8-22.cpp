#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long l, r, a;
    cin>>l>>r>>a;
    long long res, ans;
    res=r/a;
    if(res<=(a-1)){
        if((res*a)>l){
            ans=((res)*a)-1;
        }else{
            ans=(res)*a;
        }
    }else{
        if(((res)*a)<r){
            ans=((res)*a)+1;
        }else{
            ans=(res)*a;
        }
    }

    cout<<ans<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }return 0;
}
