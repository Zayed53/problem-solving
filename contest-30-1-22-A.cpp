#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    string str;
    cin>>n;
    cin>>str;
    if(n==1){
        cout<<"YES\n";
    }else if(n==2){
        if(str[0]!=str[1]){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else{
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
