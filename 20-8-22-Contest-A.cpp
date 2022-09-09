#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, m;
    cin>>n>>m;
    if(n==1&&m==1){
        return 0;
    }if(n==m){
        return 3*n-2;
    }
    if(n<m){
        return 2*n+m-2;
    }
    return 2*m+n-2;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}
