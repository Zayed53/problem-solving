#include <bits/stdc++.h>

using namespace std;

long long solve(){
    long long n, c=0;
    cin>>n;
    c=(n/3)*5;
    c=c+((n/2)-(n/3))*3;
    c=c+(n-(n/2));
    return c;
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
