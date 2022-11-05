#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n;
    int c=0, ci=0, ls, rez=0;
    cin>>n;
    vector<int> vec(n);
    for(int &i:vec){
        cin>>i;
    }
    for(int i=0;i<vec.size();i++){
        if(vec[i]>0&&ls==1){
            ci=ci+1;
            ls=1;
        }if(vec[i]==0){
            ls=0;
            if(ci>0){
                ci=ci-1;
                c=c+1;
            }
        }if(vec[i]>0&&ls==0){
            ci=1;
        }
    }for(int i=n-1;i>=0;i--){
        if(vec[i]==1){
            break;
        }
        if(vec[i]==0){
            rez=rez+1;
        }
    }
    if(rez>0){
        if(rez>c){
            if(c==0){
                if(rez<=ci){
                    c=c+rez;
                }else{
                    c=c+ci;
                }
            }else{
                c=c+(rez-c);
            }

        }
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}
