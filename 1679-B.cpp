#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q, ck;
    long long s=0, pv=0;
    cin>>n>>q;
    vector<long long>vec(n);
    map<long long, long long> map1;
    for(auto &i: vec){
        cin>>i;
    }
    for(auto &i: vec){
        s=s+i;
    }
    while(q--){
        cin>>ck;
        if(ck==1){
            long long i, x;
            cin>>i>>x;
            if(pv==0){
                if(map1.count(i)>0){
                    s=(s-map1[i])+x;
                }else{
                    s=(s-vec[i-1])+x;
                }map1.insert(pair<long long, long long>(i, x));
            }else{
                if(map1.count(i)>0){
                    s=(s-map1[i])+x;
                }else{
                    s=(s-pv)+x;
                }map1.insert(pair<long long, long long>(i, x));

            }
        }else if(ck==2){
            long long x;
            cin>>x;
            pv=x;
            map1.clear();
            s=vec.size()*x;
        }cout<<s<<"\n";
    }return 0;

}


