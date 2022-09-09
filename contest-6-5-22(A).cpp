#include <bits/stdc++.h>

using namespace std;

string solve(){
    int n, c=0;
    vector<int> vec;
    cin>>n;
    for(int i=0, in;i<n;i++){
        cin>>in;
        vec.push_back(in);
    }
    if(is_sorted(vec.begin(), vec.end())){
        return "YES";
    }

    for(auto &i : vec ){
        if(i<0){
            c++;
        }
    }for(int i=0;i<c;i++){
        if(vec[i]>0){
            vec[i]=-1*vec[i];
        }
    }for(int i=c;i<vec.size();i++){
        if(vec[i]<0){
            vec[i]=-1*vec[i];
        }
    }
    if(is_sorted(vec.begin(), vec.end())&&(c<vec.size())){
        return "YES";
    }return "NO";

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
