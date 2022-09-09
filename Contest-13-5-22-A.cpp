#include <bits/stdc++.h>

using namespace std;

int solve(){
    int l1, r1, l2, r2;
    cin>>l1>>r1>>l2>>r2;
    if(l2>=l1){
        if(r1>=l2){
            return l2;
        }
    }if(l1>=l2){
        if(r2>=l1){
            return l1;
        }
    }return l1+l2;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
