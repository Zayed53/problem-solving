#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, c=0;
    cin>>n;
    string str;
    cin>>str;
    map<int, string> mp;
    string str2;
    str2.push_back(str[0]);
    mp.insert({1, str2});
    for(int i=2;i<=n;i++){
        int a, b;
        cin>>a>>b;
        mp.insert({b, mp[a]+str[b-1]});
        string temp=mp[b];
        reverse(temp.begin(), temp.end());
        if(mp[b]==temp){
            c++;
        }
    }
    c=c+1;
    int ans=__gcd(c, n);
    cout<<c/ans<<'/'<<n/ans<<"\n";

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
