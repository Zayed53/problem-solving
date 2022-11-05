#include <bits/stdc++.h>

using namespace std;

int solve(){
    long long a, b, c;
    cin>>a>>b>>c;
    if((a-1)<((abs(c-b))+(c-1))){
        return 1;
    }if((a-1)>((abs(c-b))+(c-1))){
        return 2;
    }
    return 3;
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
