#include <bits/stdc++.h>

using namespace std;

int solve()
{
    long long a, b;
    cin>>a>>b;
    if(a==1&&b==1){
        return 0;
    }else if(a==1||b==1){
        return 1;
    }else{
        return 2;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
