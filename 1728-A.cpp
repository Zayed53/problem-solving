#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int n, in,  mx=0, ans;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>in;
        if(in>=mx){
            ans=i+1;
            mx=in;
        }
    }
    return ans;
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
