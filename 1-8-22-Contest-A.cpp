#include <bits/stdc++.h>


using namespace std;

void solve(){
    int n, hs, ms, th, tm, ans, almn, gvmn;
    cin>>n>>hs>>ms;
    gvmn=hs*60+ms;
    ans=24*60;
    while(n--){
        cin>>th>>tm;
        almn=(th*60)+tm-gvmn;
        if(almn<0){
            almn=almn+24*60;
        }
        ans=min(ans, almn);
    }
    cout<<ans/60<<" "<<ans%60<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }return 0;
}
