#include <bits/stdc++.h>

using namespace std;

string solve(){
    int a, b,c,d;
    cin>>a>>b;
    for(int i=0;i<b;i++){
        cin>>c>>d;
    }
    if(a==b){
        return "NO\n";
    }
    return "Yes\n";
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
