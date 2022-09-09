#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> veca;
    vector <int> vecb;

    for(int i=0; i<n;i++){
        int in;
        cin>>in;
        veca.push_back(in);
    }for(int i=0;i<n;i++){
        int in;
        cin>>in;
        vecb.push_back(in);
    }for(int i=0; i<n;i++){
        if(veca[i]<vecb[i]){
            swap(veca[i], vecb[i]);
        }
    }sort(veca.begin(), veca.end());
    sort(vecb.begin(), vecb.end());
    cout<<veca[n-1]*vecb[n-1]<<"\n";

}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        solve();
    }return 0;
}
