#include <bits/stdc++.h>

using namespace std;

string solve(){
    long long n, m;
    cin>>n>>m;
    if(((n-1)%2==0)&&((m-1)%2!=0)){
        return "Burenka";
    }
    if(((n-1)%2==0)&&((m-1)%2==0)){
        return "Tonya";
    }
    if(((n-1)%2!=0)&&((m-1)%2==0)){
        return "Burenka";
    }
    if(((n-1)%2!=0)&&((m-1)%2!=0)){
        return "Tonya";
    }
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
