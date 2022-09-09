#include <bits/stdc++.h>

using namespace std;

string solve(){
    int a, b, c;
    cin>>a>>b>>c;
    if(((a+b+c)%3)==0){
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
