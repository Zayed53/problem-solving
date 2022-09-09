#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, c, r, l, rt;
    cin>>a>>b>>c>>r;
    l=max(c-r, min(a,b));
    rt=min((c+r), max(a,b));
    cout<<abs(b-a)-max(0,rt-l)<<endl;

}
int main()
{
    int n;
    cin>>n;
    while(n--){
        solve();
    }return 0;
}
