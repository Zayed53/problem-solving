#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, mx=0;
    cin>>n;
    vector<int> vec(n);
    for(auto &i : vec ){
        cin>>i;
    }
    for(int i=1;i<n;i++){
        mx=(vec[i]-vec[0])>mx?(vec[i]-vec[0]):mx;
    }
    for(int i=n-2;i>=0;i--){
        mx=(vec[n-1]-vec[i])>mx?(vec[i]-vec[n-1]):mx;
    }
    for(int i=0;i<n-1;i++){
        mx=(vec[i+1]-vec[i])>mx?(vec[i+1]-vec[i]):mx;
    }

    return mx;
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
