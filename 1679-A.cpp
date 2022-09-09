#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n, ans1, ans2;
    cin>>n;

    if(n%2!=0||n==2){
        cout<<-1<<"\n";
    }else{
        if(n%6!=0){
            ans1=(n/6)+1;
            ans2=n/4;
        }else{
            ans1=n/6;
            ans2=n/4;
        }cout<<ans1<<" "<<ans2<<"\n";
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
