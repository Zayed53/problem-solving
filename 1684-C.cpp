#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m,c=0, p, r, l;
    long long in;
    vector<vector<long long>>vec;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        vector<long long>vecin;
        for(int j=0;j<m;j++){
            cin>>in;
            vecin.push_back(in);
        }vec.push_back(vecin);
    }
    for(int i=0; i<vec.size();i++){
        if(is_sorted(vec[i].begin(), vec[i].end())){
            continue;
        }else{
            c=1;
            p=i;
            break;
        }
    }
    if(c==0){
        cout<<1<<" "<<1<<"\n";
        return ;
    }
//    if(c==1)
//       {
        vector<long long> newvec;
        newvec=vec[p];
//        for(auto &i: newvec){
//            cout<<i<<"vec\n";
//        }
        sort(newvec.begin(), newvec.end());
        for(int i=0, q=0; i<newvec.size(); i++){
            if(vec[p][i]!=newvec[i]){
                if(q==2){
                    //q=3;
                    cout<<-1<<"\n";
                    return ;
                }

                if(q==0){
                    l=i;
                    //cout<<"l="<<l;
                }else if(q==1){
                    r=i;
                    //cout<<"r="<<r;
                }q=q+1;

            }else{
                continue;
            }
        }for(int i=0 ;i<vec.size();i++){
            swap(vec[i][l], vec[i][r]);
        }
        for(int i=0; i<vec.size();i++){
            if(is_sorted(vec[i].begin(), vec[i].end())){
                continue;
            }else{
                cout<<-1<<"\n";
                return ;
            }
        }cout<<l+1<<" "<<r+1<<"\n";
        return ;

//    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }return 0;
}
