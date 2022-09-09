#include <bits/stdc++.h>

using namespace std;

string solve(){
    int n, s=0;
    double av;
    cin>>n;
    vector<int> vec(n);
    for(auto &i: vec){
        cin>>i;
        s=s+i;
    }for(auto &i :vec){
        av=s-i;
        av=av/(n-1);
        if(av==i){
            return "YES";
            break;
        }
    }return "NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
