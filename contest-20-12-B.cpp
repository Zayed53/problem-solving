#include <iostream>
#include<math.h>

using namespace std;

void solve(){
    long long n, ans;
    cin>>n;
    ans=(long long)sqrt(n)+(long long)cbrt(n)-(long long)sqrt(cbrt(n));
    cout<<ans<<endl;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        solve();
    }
}
