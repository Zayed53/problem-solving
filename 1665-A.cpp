#include <bits/stdc++.h>
using namespace std;

long long solve(){
    long long  l=0, r=0, k, q;
    int n,m;
    cin>>n>>m;
    long long in[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>in[i][j];
            if(in[i][j]>in[l][r]){
                r=j;
                l=i;
            }
        }
    }k=max(1+l, (n-l));
    q=max(1+r, (m-r));
    return q*k;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}

