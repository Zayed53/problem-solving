#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    long long k, b, s;

    cin>>n>>k>>b>>s;

    if((b*k)>s){
        cout<<-1<<"\n";
        return ;
    }
    if(((((b+1)*k)-1)+((n-1)*(k-1)))<s){
        cout<<-1<<"\n";
        return ;
    }
    vector<long long>vec(n);
    for(int i=0; i<n;i++){
        vec[i]=0;
    }
    long long t=0;
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            if((s/k)>b){
                vec[i]=(b*k)+((((b+1)*k)-1)%k);
                t=t+vec[i];
            }else{
                vec[i]=(b*k)+(s-(b*k));
                t=t+vec[i];
            }
        }
        else if(t<s){
            if((s-t)>=k){
                vec[i]=k-1;
                t=t+vec[i];
            }else{
                vec[i]=s-t;
                t=t+vec[i];
            }
        }else if(t==s){
            vec[i]=0;
        }

    }
    for(auto &i : vec){
        cout<<i<<" ";
    }cout<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
