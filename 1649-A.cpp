#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, arr[n+1] , l=0;
    cin>>n;
    int r= n-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=1;
    while(arr[i]==1){
        l++;
        i++;
    }
    i=n-2;
    while(arr[i]==1){
        r--;
        i--;
    }
    if(r>l){
        return r-l;
    }else{
        return 0;
    }
}

int main()
{
    int t, ans;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}

