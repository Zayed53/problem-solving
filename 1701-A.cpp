#include <bits/stdc++.h>

using namespace std;

int solve(){
    int a, b, c, d;
    cin>>a>>b;
    cin>>c>>d;
    if(a==0&&b==0&&c==0&&d==0){
        return 0;
    }if(a==1&&b==1&&c==1&&d==1){
        return 2;
    }return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
