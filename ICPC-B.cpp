#include <bits/stdc++.h>

using namespace std;

string solve(){
    int a, b, c, k;
    cin>>a>>b>>c>>k;
    if(((a+b+c)%3)!=0){
        return "Fight\n";
    }
    int ck=(a+b+c)/3;
    int ans=abs(a-ck)+abs(b-ck)+abs(c-ck);
    if(ans%k==0){
        return "Peaceful\n";
    }
    return "Fight\n";
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
