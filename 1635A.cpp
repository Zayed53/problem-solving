#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, ans=0, x;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        ans |= x;
    }return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
