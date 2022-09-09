#include <bits/stdc++.h>

using namespace std;

long long solve(){
    int n;
    string str;
    long long ans;
    cin>>n;
    cin>>str;
    ans=n;
    for(int i=1 ; i<n ; i++){
        if(str[i]!=str[i-1]){
            ans=ans+i;
        }

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
