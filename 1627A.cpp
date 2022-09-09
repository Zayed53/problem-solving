#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int  n, m, r, c;
    vector<string> vec;
    cin>>n>>m>>r>>c;

    for(int i=0; i<n;i++){
        string str;
        cin>>str;
        vec.push_back(str);
    }
    if(vec[r-1][c-1]=='B'){
        return 0;
    }for(int i=0;i<vec[r-1].size();i++){
        if(vec[r-1][i]=='B'){
            return 1;
        }
    }for(int i=0; i<n ; i++){
        if(vec[i][c-1]=='B'){
            return 1;
        }
    }for(int i=0; i<n ; i++){
        for(int j=0; j<vec[i].size();j++){
            if(vec[i][j]=='B'){
                return 2;
            }
        }
    }return -1;

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
