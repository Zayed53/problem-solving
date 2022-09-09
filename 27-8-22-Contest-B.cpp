#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, m, s1, s2, d;
    cin>>n>>m>>s1>>s2>>d;
    if(s1-d>1&&s2+d<m){
        return (n-1)+(m-1);
    }if(s1+d<n&&s2-d>1){
        return (n-1)+(m-1);
    }
    return -1;
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
