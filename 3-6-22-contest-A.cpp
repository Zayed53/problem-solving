#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, ck=0;
    long long c;
    cin>>n;
    vector<long long> vec;

    for(int i=0;i<n;i++){
        long long put;
        cin>>put;
        vec.push_back(put);
    }
    c=0;
    for(auto &i : vec){
        if(i%2==0){
           c++;
        }else if(i%2!=0){
            ck=1;
        }
    }if(ck==1){
        return c;
    }
    sort(vec.begin(), vec.end());
    for(int i=1;i<30;i++){
        long long in=pow(2, i);
        if(((vec[0]/in)%2)!=0){
            c=i;
            break;
        }
    }
    for(auto &i: vec){
        for(int j=2;j<30;j++){
        long long in=pow(2, j);
            if(((i/in)%2)!=0){
                if(j<c){
                    c=j;
                    break;
                }else{
                    continue;
                }
            }
        }
    }
    return c+n-1;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
