#include <bits/stdc++.h>

using namespace std;

string solve(){
    int hv;
    int arr[3];

    cin>>hv;
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    for(int i=0;i<2;i++){
        if(arr[hv-1]==0){
            return "NO";
        }else{
            hv=arr[hv-1];
        }
    }return "YES";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
