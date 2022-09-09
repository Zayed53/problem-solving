#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, k, c=0;
    cin>>n>>k;
    vector<long long>vec(n);
    for(auto &i : vec){
        cin>>i;
    }
    if(k==1){
        return (n-1)/2;
    }for(int i=1 ; i<n-1;i++){
        if(vec[i]>(vec[i-1]+vec[i+1])){
            c=c+1;
        }
    }return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
