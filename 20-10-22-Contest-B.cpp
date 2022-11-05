#include <bits/stdc++.h>

using namespace std;

long long solve(){
    int n;
    cin>>n;
    long long a, b, mx=0, c=0;
    for(int i=0;i<n;i++){
        cin>>a;
        //cout<<a<<" ";
        c=c+a;
        //cout<<c<<"\n";
    }
    for(int i=0;i<n;i++){
        cin>>b;
        c=c+b;
        //cout<<b<<" ";
        mx=b>mx?b:mx;
        //cout<<c<<"-max:"<<mx<<"\n";
    }
    c=c-mx;
    return c;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}
