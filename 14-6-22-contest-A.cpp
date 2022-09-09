#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, ck=0;
    cin>>n;
    int s=n;
    if(n==1){
        return 1;
    }
    vector<int>vec;
    for(int i=0, j;i<n;i++){
        cin>>j;
        vec.push_back(j);
    }sort(vec.begin(), vec.end());
    int c=1;
    for(int i=1;i<n;i++){
        if(vec[i]==vec[i-1]){
            c=c+1;
        }else{
            if(c%2==0){
                ck=ck+1;
                s=s-c+2;
                c=1;
            }else{
                s=s-c+1;
                c=1;
            }
        }
    }if(c%2==0){
        ck=ck+1;
        s=s-c+2;
    }else{
        s=s-c+1;
    }
    s=s-ck+2*(ck/2);
    return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
