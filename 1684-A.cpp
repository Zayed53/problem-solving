#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m,c=0, p, r, l;
    vector<vector<int>>vec;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        vector<int>vecin;
        for(int j=0, in;j<m;j++){
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
//    if(c==0){
//        return;
//    }
    if(c==1){
        vector<int> newvec;
        newvec.push_back(vec[p]);
        sort(newvec.begin(), newvec.end());
        for(int i=0, q=0; i<newvec.size(); i++){
            if(vec[p][i]!=newvec[i]){
                if(q==2){
                    q=3;
                    break;
                }else{
                    q=q+1;
                    if(q==0){
                        l=i;
                    }else if(q==1){
                        r=i;
                    }
                }
            }
        }for(int i=0 ;i<vec.size();i++){
            swap(vec[i][l], vec[i][r]);
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

    }
}
