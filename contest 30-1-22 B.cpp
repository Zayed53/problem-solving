#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int f=n, s=-1;
    //vector<int>vec;
    for(int i=0; i<n;i++){
        if(i%2==0){
            f=f-1;
            //vec.push_back(f);
            cout<<f<<" ";
        }else if(i%2!=0){
            s=s+1;
            cout<<s<<" ";
        }
    }cout<<"\n";

}
int main()
{
    int n;
    cin>>n;
    while(n--){
        solve();
    }return 0;
}
