#include <iostream>
using namespace std;
void solve(){
    long long a, b, c;
    long long arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }a=arr[6]-arr[5];
    c=arr[4]-a;
    b=arr[5]-c;
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        solve();
    }return 0;
}
