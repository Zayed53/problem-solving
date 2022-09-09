#include <bits/stdc++.h>

using namespace std;

long long solve(){
    long long n;
    cin>>n;
    if(n==1){
        return 2;
    }if(n==2||n==3){
        return 1;
    }if(n%3==0){
        return n/3;
    }return (n/3)+1;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
