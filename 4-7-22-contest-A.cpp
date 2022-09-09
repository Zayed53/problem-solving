#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;
    vector<string>vec;
    cin>>n>>m;
    n=n/2;
    m=m/2;
    int c=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
          string str;
          for(int j=0;j<m;j++){
            if(j%2==0){
                str.append("10");
            }else{
                str.append("01");
            }

        }vec.push_back(str);
        str.clear();
            for(int j=0;j<m;j++){
                //string str
                if(j%2==0){
                    str.append("01");
                }else{
                    str.append("10");
                }
            }vec.push_back(str);
            str.clear();

        }else{
            string str;
            for(int j=0;j<m;j++){
                if(j%2==0){
                    str.append("01");
                }else{
                    str.append("10");
                }

            }vec.push_back(str);
            str.clear();
                for(int j=0;j<m;j++){
                    if(j%2==0){
                        str.append("10");
                    }else{
                        str.append("01");
                    }
                }vec.push_back(str);
                str.clear();
            }

    }for(int i=0;i<n*2;i++){
        for(int j=0;j<m*2;j++){
            cout<<vec[i][j]<<" ";
        }cout<<"\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }return 0;
}
