#include <bits/stdc++.h>

using namespace std;

long long solve(){
    long long n, m, ans;
    cin>>n>>m;
    ans=((m*(m+1))/2)+(n-1)*m+((m*n*(n-1))/2);
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
